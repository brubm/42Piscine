/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:01:53 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/17 14:08:03 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	position;
	int	compare;

	position = 0;
	while (position < size - 1)
	{
		compare = 0;
		while (compare < size - position -1)
		{
			if (tab[compare] > tab[compare + 1])
			{
				temp = tab[compare];
				tab[compare] = tab[compare + 1];
				tab[compare + 1] = temp;
			}
		compare++;
		}
		position++;
	}
}
/*
int	main(void)
{
	int	array[] = {7, 5, 3, 4, 1};
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
	ft_sort_int_tab(array, size);
	i = 0;
	printf("Array ordenado: ");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
*/