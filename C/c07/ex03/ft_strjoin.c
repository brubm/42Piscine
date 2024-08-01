/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:02:45 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/31 12:12:18 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_length(char **strings, int size, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += len(strings[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	char	*dest;

	if (size == 0)
		return (malloc(sizeof(char)));
	string = malloc((total_length(strs, size, len(sep)) + 1) * sizeof(char));
	dest = string;
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(dest, sep);
			dest += len(sep);
		}
		i++;
	}
	*dest = '\0';
	return (string);
}
/*
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*final;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "world!";
	strs[2] = "Again";
	separator = "/";
	final = ft_strjoin(size, strs, separator);
	printf("%s\n", final);
	free(final);
}*/