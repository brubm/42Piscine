/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:53:04 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/22 18:01:51 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *scr)
{
	unsigned int	len;

	len = 0;
	while (*scr != '\0')
	{
		len++;
		scr++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (dest[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	second[] = "1234";
	char	first[10] = "Começo";
	unsigned int	size = sizeof(first);

	unsigned int	result = ft_strlcat(first, second, size);
	printf("String concatenada: %s\n", first);
	printf("Tamanho total: %u\n", result);
	return (0);
}*/