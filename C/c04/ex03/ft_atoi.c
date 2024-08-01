/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:07:07 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/31 16:22:09 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{	
	int	aux;
	int	sign;

	aux = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\v' || \
	*str == '\t' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		aux = aux * 10 + (*str - '0');
		str++;
	}
	return (aux * sign);
}

int	main(int argc, char	*argv[])
{
   if (argc < 2)
   {
	    printf("Uso: %s <inserir numero>\n", argv[0]);
        return 1;
    }

    int numero_convertido = ft_atoi(argv[1]);
    printf("Número convertido: %d\n", numero_convertido);

    return 0;
}
