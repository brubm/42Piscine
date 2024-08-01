/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:29:48 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/18 17:43:37 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z')))
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
    char *str1 = "bruna";
    char *str2 = "123&4N";
    char *str3 = "";
    char *str4 = NULL;

	printf("String '%s': %d\n", str1, ft_str_is_lowercase(str1));
    printf("String '%s': %d\n", str2, ft_str_is_lowercase(str2));
    printf("String '%s': %d\n", str3, ft_str_is_lowercase(str3));
    printf("String '%s': %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
}
*/