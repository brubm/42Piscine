/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:25:18 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/25 11:18:15 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * (ft_recursive_power(nb, power - 1)));
	}
}
/*
int	main()
{
	int number = 3;
	int power = 3;
	printf("'%d'", ft_recursive_power(number, power));
	return (0);
}*/