/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:47:35 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/30 11:05:18 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printarg(char *arg)
{
	int	len;

	len = 0;
	while (arg[len] != '\0')
	{
		len++;
	}
	write (1, arg, len);
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_printarg(argv[i]);
		i++;
	}	
	return (0);
}
