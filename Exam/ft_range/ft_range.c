/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:52:31 by bbortol2          #+#    #+#             */
/*   Updated: 2024/08/01 12:40:53 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int start, int end)
{	
	int	size;
	int i;
	int	*array;
	
	size = (end - start) + 1;
	array = (malloc(sizeof(int) * size));
	i = 0;
	if (!array)
		return (0);
	if (size == 1)
		array[0] = start;
	if (start < end)	
	{
		while (i < size)
		{
			array[i] = start + i;
			i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			array[i] = start - i;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int start = 5;
	int	end = 5;
	int	*array;
	int	i;

	i = 0;
	array = ft_range(start, end);
	while (i <= end - start)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}