/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:27:29 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/29 15:37:04 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		len;

	len = 0;
	if (argc >= 1)
	{
		while (argv[0][len] != '\0')
		{
			len++;
		}
		write (1, argv[0], len);
		write (1, "\n", 1);
	}
	return (0);
}
