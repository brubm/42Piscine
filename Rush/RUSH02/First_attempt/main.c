#include "rush02.h"

int main(int argc, char **argv)
{
    if(argc < 2 || argc > 3)    
        ft_putstr("Error");      
    if(argc == 2)    
        ft_printnumber(argv[1]);    
    if(argc == 3)
    {
        ft_adddictionary(argv[1]);
        ft_printnumber(argv[2]);
    }
    return (0);
}