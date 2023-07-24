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

int main(){
    char *str = "Hello World";
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    ft_putendl_fd(str, fd);
    close(fd);
}