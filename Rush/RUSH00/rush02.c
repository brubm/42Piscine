/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:46:07 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/14 12:15:15 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, int y, int xt, int yt)
{
	if ((yt == 0) && (xt == 0 || xt == x - 1))
	{
		ft_putchar('A');
	}
	else if ((yt == y - 1) && (xt == x - 1 || xt == 0))
	{
		ft_putchar('C');
	}
	else if ((xt == 0 || xt == x - 1) || (yt == 0 || yt == y - 1))
	{
		ft_putchar('B');
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
