/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:31:36 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/22 13:24:47 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			*origin_dest;

	i = 0;
	origin_dest = dest;
	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (origin_dest);
}
/*
int	main(void)
{
	char	second[] = "1234";
	char	first[] = "Começo";
	unsigned int	n = 2;

	printf("'%s'\n", ft_strncat(first, second, n));
	return (0);
}
*/