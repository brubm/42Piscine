/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:51:43 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/18 17:52:16 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
    char *str1 = "BBM";
    char *str2 = "123&4n";
    char *str3 = "";
    char *str4 = NULL;

	printf("String '%s': %d\n", str1,  ft_str_is_uppercase(str1));
    printf("String '%s': %d\n", str2,  ft_str_is_uppercase(str2));
    printf("String '%s': %d\n", str3,  ft_str_is_uppercase(str3));
    printf("String '%s': %d\n", str4,  ft_str_is_uppercase(str4));
	return (0);
}
*/