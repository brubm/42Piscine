/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:11:00 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/28 15:22:32 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	*dict;
	int		number;
	t_list	*result;	

	dict = NULL;
	number = atoi(argv[1]);
	result = numbers_to_words(argv[1]);
	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		dict = ft_getnb(ft_atoi(argv[2]));
		if (!dict)
		{
			ft_putstr("Dict Error\n");
			return (1);
		}
	}
	if (!result)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	write(1, result, ft_strlen(result));
	write(1, "\n", 1);
	free(result);
	free(dict);
	return (0);
}
