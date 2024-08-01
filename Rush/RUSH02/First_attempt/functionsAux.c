/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionsAux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:04:47 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/28 19:09:41 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char  	*ft_removespaces(char *str)
{
	int i;
	int start;
	int end;

	start = 0;
	while (str[start] && str[start] ==  ' ')
		start++;
	end = ft_strlen(str) - 1;
	while (end > start && str[end] == ' ')
		end--;
	i = 0;
	while (start <= end)
	{
		str[i] = str[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return str;
}

size_t	ft_fread(void *buffer, size_t tamanho, size_t count, FILE *fp)
{
	return fread(buffer, tamanho, count, fp);
}
