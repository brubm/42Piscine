/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:07:00 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/18 18:31:06 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		++ptr;
	}
	return (str);
}
/*
int	main(void)
{
    char test[] = "Bruna Miraya";
    
	printf("Antes: '%s'\n", test);
    printf("Depois: '%s'", ft_strupcase(test));
    return (0);
}*/