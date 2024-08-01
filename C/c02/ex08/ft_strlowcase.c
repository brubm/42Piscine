/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:31:55 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/20 18:02:17 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + ('a' - 'A');
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
    printf("Depois: '%s'", ft_strlowcase(test));
    return (0);
}*/