/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:52:50 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/20 17:57:01 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 32 && *str <= 126)))
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
    char *str2 = "\n";
    char *str3 = "";
    char *str4 = NULL;

	printf("String '%s': %d\n", str1,  ft_str_is_printable(str1));
    printf("String '%s': %d\n", str2,  ft_str_is_printable(str2));
    printf("String '%s': %d\n", str3,  ft_str_is_printable(str3));
    printf("String '%s': %d\n", str4,  ft_str_is_printable(str4));
	return (0);
}
*/