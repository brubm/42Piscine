/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:43:18 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/29 16:35:33 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	print_argv(char *argv)
{
	int	len;

	len = 0;
	while (argv[len] != '\0')
	{
		len++;
	}
	write (1, argv, len);
	write (1, "\n", 1);
}

void	sort_argv(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
		j++;
		}
	i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort_argv(argc, argv);
	while (i < argc)
	{
		print_argv(argv[i]);
		i++;
	}
	return (0);
}
