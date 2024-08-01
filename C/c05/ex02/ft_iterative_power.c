/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:51:11 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/25 10:24:58 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = power;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i > 1)
	{
		result *= nb;
		i--;
	}
	return (result);
}
/*
int	main()
{
	int number = 2;
	int power = 0;
	printf("'%d'", ft_iterative_power(number, power));
	return (0);
}*/