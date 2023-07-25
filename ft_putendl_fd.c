#include "libft.h"
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd){
    if(fd < 0)
        return;
    
    while (*s != '\0'){
        write(fd, s, 1);
        s++;
    }

    char newline = '\n';
    write(fd, &newline, 1);
}