/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:15:32 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/17 18:54:09 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = sizeof(array) / sizeof(array[0]);
	i = 0;
	printf("Array original: ");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(array, size);

	i = 0;
	printf("Array invertido: ");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
