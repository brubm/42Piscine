/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:26:37 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/28 18:30:34 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void print_large_number(char *number_str, t_list *tab)
{
    int len = strlen(number_str);
    int start, end;
    char block[4];
    int block_count = 0;

    while (len > 0)
    {
        start = len > 3 ? len - 3 : 0;
        end = len;

        strncpy(block, number_str + start, end - start);
        block[end - start] = '\0';

        int num = atoi(block);
        if (num > 0)
        {
            // Process block and print
            // Add a suffix if it's not the first block
            if (block_count > 0)
            {
                print_suffix(block_count, tab);
            }
			ft_print_block(num, tab);
			}

        len -= 3;
        block_count++;
    }
}

void ft_print_block(int num, t_list *tab)
{
    int mult;
    int i = 0;

    // Handle hundreds place
    if (num >= 100)
    {
        mult = num / 100 * 100;
        while (tab[i].nb != mult)
            i++;
        ft_putstr(tab[i].val);
        write(1, " ", 1);
        num %= 100;
    }

    // Handle tens and units place
    if (num >= 20)
    {
        mult = num / 10 * 10;
        while (tab[i].nb != mult)
            i++;
        ft_putstr(tab[i].val);
        write(1, " ", 1);
        num %= 10;
    }

    // Handle units place
    if (num > 0)
    {
        while (tab[i].nb != num)
            i++;
        ft_putstr(tab[i].val);
    }
}

void print_suffix(int block_count, t_list *tab)
{
    char *suffixes[] = {
        "", "thousand", "million", "billion", "trillion", "quadrillion", 
        "quintillion", "sextillion", "septillion", "octillion", 
        "nonillion", "decillion", "undecillion"
    };

    if (block_count > 0 && block_count < 13)
    {
        int index = block_count - 1;
        int i = 0;

        while (tab[i].nb != 1000)
            i++;
        ft_putstr(tab[i].val);
        write(1, " ", 1);

        ft_putstr(suffixes[index]);
        write(1, " ", 1);
    }
}
