#include "rush02.h"

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup(const char *src)
{
    char *dup;
    int i;

    if (!(dup = malloc(sizeof(char) * (ft_strlen(src) + 1))))
        return NULL;
    i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}


void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
