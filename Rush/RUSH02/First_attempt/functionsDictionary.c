/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionsDictionary.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbortol2 <bbortol2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:26:53 by                   #+#    #+#             */
/*   Updated: 2024/07/28 19:16:07 by bbortol2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char *ft_getnumber(FILE *fp) {
    char c;
    int i = 0;
    char *number = malloc(20); 

    if (!number)
        return NULL;

    while (ft_fread(&c, 1, 1, fp) > 0 && (c >= '0' && c <= '9')) {
        number[i++] = c;
    }
    number[i] = '\0';

    return (number);
}


char *ft_getextension(FILE *fp) {
    char c;
    int i = 0;
    char *extension = malloc(100); 

    if (!extension)
        return NULL;

    while (fread(&c, 1, 1, fp) > 0 && c != '\n') {
        extension[i++] = c;
    }
    extension[i] = '\0';

    return (ft_removespaces(extension));
}

t_dictionary *ft_adddictionary(char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp)
        return (0);

    t_dictionary *dictionary = malloc(32 * sizeof(t_dictionary));
    if (!dictionary) {
        fclose(fp);
        return (0);
    }

    int i = 0;
    while (i < 32 && !feof(fp)) {
        dictionary[i].number = ft_getnumber(fp);
        if (!dictionary[i].number)
            break;

        dictionary[i].text = ft_getextension(fp);
        if (!dictionary[i].text)
            break;
        ft_removespaces(dictionary[i].text);      
        if (ft_strlen(dictionary[i].number) > 0 && ft_strlen(dictionary[i].text) > 0)
            i++;
    }

    fclose(fp);
    return dictionary;
}

int main() {
    t_dictionary *dict = ft_adddictionary("dict.txt");
    if (!dict) {
        printf("Erro ao criar o dicionário.\n");
        return (1);
    }

    i = 0;
    while (i < 32)
    {
        printf("%s: %s\n", dict[i].number, dict[i].text);
        i++;
    }

    i = 0;
    while (i < 32)
    {
        free(dict[i].number);
        free(dict[i].text);
        i++;
    }
    free(dict);

    return 0;
}
