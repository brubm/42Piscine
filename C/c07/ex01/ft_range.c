/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:32:44 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/31 12:09:32 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	size = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(size * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}	
	return (array);
}
/*
int	main()
{
	int	max = 10;
	int	min = 2;
	int	size = max - min;
	int	*array;
	int	i = 0;

	array = ft_range(min, max);
	
	if (array == NULL)
	{
		printf("Falha na alocação de memória");
	}
	while (i < size)
	{
		printf("Elemento %d: %d\n", i, array[i]);
		i++;
	}
	return (0);
}*/