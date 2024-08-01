/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:01 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/31 12:11:58 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main()
{
	int	max = 10;
	int	min = 2;
	int	*array;
	int size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&array, min, max);
	if (size == -1)
	{
		printf("Falha na alocação de memória");
	}
	if (size == 0)
	{
		printf("Vazio");
	}
	else
	{
		printf("%d", size);
	}
	return (0);
}*/