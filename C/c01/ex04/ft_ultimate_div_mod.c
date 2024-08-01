/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:08:29 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/16 15:28:13 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 5;
	printf("Antes de trocar: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois de trocar: a = %x, b = %d\n", a, b);
	return (0);
}
*/
