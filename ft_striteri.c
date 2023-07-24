#include "libft.h"

void	ft_striter(char *s, void (*f)(char *)){
    if(s == NULL || f == NULL)
        return (NULL);

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