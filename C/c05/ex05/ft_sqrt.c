/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:00:51 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/27 17:41:52 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i != nb && i < 46341)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
/*
int	main()
{
	int number = -7;
	printf("'%d'", ft_sqrt(number));
	return (0);
}*/