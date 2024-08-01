/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:25:24 by bbortol2          #+#    #+#             */
/*   Updated: 2024/08/01 10:48:34 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char i;

	char = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}