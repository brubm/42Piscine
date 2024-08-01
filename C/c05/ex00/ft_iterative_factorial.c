/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:50:47 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/27 17:44:22 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
/*
int	main()
{
	int 	nb = 0;

	printf("'%d'", ft_iterative_factorial(nb));
}*/