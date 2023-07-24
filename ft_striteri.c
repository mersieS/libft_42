#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int , char*)){
    if(s == NULL || f == NULL)
        return;

    char *ptr;
    unsigned int i;
    
    ptr = s;
    i = 0;
    while (*ptr != '\0')
    {
        f(i, ptr);
        ptr++;
        i++;
    }
}