/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:58:44 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/18 18:00:15 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
    char *str1 = "Teste";
    char *str2 = "123&4Numeros";
    char *str3 = "";
    char *str4 = NULL;

	printf("String '%s': %d\n", str1, ft_str_is_alpha(str1));
    printf("String '%s': %d\n", str2, ft_str_is_alpha(str2));
    printf("String '%s': %d\n", str3, ft_str_is_alpha(str3));
    printf("String '%s': %d\n", str4, ft_str_is_alpha(str4));
	return (0);
}
*/
