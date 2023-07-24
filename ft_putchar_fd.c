#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd){
    write(fd, &c, 1);
}

int main(){
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return 1;

    char ch = 'A';
    ft_putchar_fd(ch, fd);

    close(fd);
}