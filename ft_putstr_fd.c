#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd) {
    while (*s != '\0') {
        write(fd, s, 1);
        s++;
    }
}

int main(){
    char *s  = "Hello";
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(fd == -1)
        return 1;

    ft_putstr_fd(s, fd);

    close(fd);
}