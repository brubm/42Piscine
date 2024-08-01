/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:53:48 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/17 14:24:46 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	printf("Antes de trocar: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Depois de trocar: x = %x, y = %d\n", x, y);
	return (0);
}
*/
