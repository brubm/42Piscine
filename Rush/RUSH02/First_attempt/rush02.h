/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despoetizadora <despoetizadora@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:13:40 by                   #+#    #+#             */
/*   Updated: 2024/07/28 14:26:13 by despoetizad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
#define RUSH02_H

typedef struct s_dictionary
{
    char *number;
    char *text;
} t_dictionary;
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int ft_atoi(const char *str);
int ft_strlen(const char *str);
char *ft_strdup(const char *src);
char *ft_removespaces(char *str);
void	ft_putstr(char *str);
size_t ft_fread(void *buffer, size_t tamanho, size_t count, FILE *fp);
t_dictionary *ft_adddictionary(char *filename);

#endif
