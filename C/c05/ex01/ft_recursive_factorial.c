/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:31:35 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/26 16:24:06 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
int	main()
{
	int 	nb = 0;

	printf("'%d'", ft_recursive_factorial(nb));
}*/