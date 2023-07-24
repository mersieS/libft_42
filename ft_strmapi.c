#include "libft.h"
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
	char	*new_str;
	int		i;
    size_t size;

    size = ft_strlen(s);
	if (!s)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * size + 1);
	if (!new_str)
		return (NULL);
	ft_bzero(new_str, size + 1);
	i = -1;
	while (*(s + ++i))
		*(new_str + i) = f(i, *(s + i));
	return (new_str);
}

