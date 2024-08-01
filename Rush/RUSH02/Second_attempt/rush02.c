/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:44:57 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/28 15:17:47 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getnb(int fd)
{
	int	i;
	char	c[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
	exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_getval(int fd, char *c)
{
	int	i;
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_list	*numbers_to_words(char *file)
{
	int	i;
	int	fd;
	char	c[1];
	int	capacity;
	t_list	*tab;
	char *tmp;

	i = 0;
	fd = -1;
	capacity = 45;
	tab = malloc(sizeof(t_list) * capacity);
	if (tab == NULL)
		exit (1);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		free (tab);
		exit (1);
	}
	while (1)
	{
		if (i >= capacity)
		{
			int	new_capacity = capacity * 2;
			t_list *new_tab = malloc(sizeof(t_list) * new_capacity);
			if (new_tab == NULL)
			{
				free(tab);
				close (fd);
				exit (1);
			}
			int	j;

			j = 0;
			while (j < capacity)
			{
				new_tab[j] = tab[j];
				j++;
			}
			free(tab);
			tab = new_tab;
			capacity = new_capacity;
		}
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;

		if (c[0] == '\0')
			break;
	}
	close(fd);
	return (tab);
}
