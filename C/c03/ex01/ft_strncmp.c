/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:04:42 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/21 13:49:53 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}	
}
/*
int	main()
{
	char	s1[] = "aaag";
	char	s2[] = "aaaz";
	unsigned int	n = 3;
	int	result = ft_strncmp(s1, s2, n);

	if (result < 0)
	{
		printf("S1 é menor que S2\n");
	}
	else if (result == 0)
	{
		printf("S1 é igual que S2\n");
	}
	else if (result > 0)
	{
		printf("S1 é maior que S2\n");
	}
}*/