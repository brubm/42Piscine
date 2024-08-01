/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:33:20 by bbortol2          #+#    #+#             */
/*   Updated: 2024/07/23 12:07:04 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (to_find == NULL || *to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s && *f && (*s == *f))
		{
			s++;
			f++;
		}
		if (*f == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

int	main()
{
	char	*str = "Hello World!";
	char	*result;

	/* Teste com NULL*/
	char	*substr_null = NULL;
	result = ft_strstr(str, substr_null);
	if (result == NULL)
	{
		printf("Substrig não foi encontrada.\n");
	}
	else
	{
		printf("Erro: deve retornar NULL para substr NULL.\n");
	}

	/* Teste com string vazia*/
	char	*substr_empty = "";
	result = ft_strstr(str, substr_empty);
	if (result == str)
	{
		printf("Substring vazia: '%s'\n", result);
	}
	else
	{
		printf("Erro: deve retornar a string original para substr vazia.\n");
	}

	/*Teste com substring encontrada*/
	char	*substr_found = "World";
	result = ft_strstr(str, substr_found);
	if (result != NULL)
	{
		printf("Substring encontrada: '%s'\n", result);
	}
	else
	{
		printf("Erro: substring não foi encontrada quando deveria.\n");
	}

	return 0;
}