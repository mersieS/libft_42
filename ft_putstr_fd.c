#include "libft.h"

void ft_putstr_fd(char *s, int fd) {
    if(fd < 0)
        return;

    while (*s != '\0') {
        write(fd, s, 1);
        s++;
    }
}