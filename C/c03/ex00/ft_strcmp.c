/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:26:57 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/21 11:16:16 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char s1[] = "aa";
	char s2[] = "aa";
	int i = ft_strcmp(s1, s2);
	
	if (i < 0)
	{
		printf("S1 é menor que S2\n");
	}
	else if (i == 0)
	{
		printf("S1 é igual S2\n");
	}
	else if (i > 0)
	{
		printf("S1 é maior que S2\n");
	}
}*/