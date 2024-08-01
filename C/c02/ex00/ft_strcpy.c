/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:05:11 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/21 11:48:29 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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
/*
int	main(void)
{
	char	original[] = "Serei copiada pela função ft_strcpy";
	char	copy[] = "vazio";

	printf("String copy antes da função: %s\n", copy);
	ft_strcpy(copy, original);
	printf("String copy depois da função: %s\n", copy);
	return (0);
}
*/