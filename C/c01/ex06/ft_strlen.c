/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:14:34 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/20 15:49:20 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char	*string;
	int	length;
	
	string = "Erro: são necessários 16 argumentos";
	length = ft_strlen(string);
	printf("%d", length);
	return (0);
}
