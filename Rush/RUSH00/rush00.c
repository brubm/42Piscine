/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:35:06 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/14 11:58:52 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, int y, int xt, int yt)
{
	if ((xt == 0 || xt == x - 1) && (yt == 0 || yt == y - 1))
	{
		ft_putchar('o');
	}
	else if ((xt == 0 || xt == x - 1) && (yt != 0 || yt != y - 1))
	{
		ft_putchar('|');
	}
	else if ((yt == 0 || yt == y - 1) && (xt != x - 1 || xt != 0))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	print_error(void)
{
	ft_putchar('E');
	ft_putchar('R');
	ft_putchar('R');
	ft_putchar('O');
	ft_putchar('R');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	xt;
	int	yt;

	xt = 0;
	yt = 0;
	if (x < 0 || y < 0)
	{
		return (print_error());
	}
	while (yt < y)
	{
		while (xt < x)
		{
			print_line(x, y, xt, yt);
			xt++;
		}
		ft_putchar('\n');
		xt = 0;
		yt++;
	}
}
