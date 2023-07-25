#include "libft.h"
#include <fcntl.h>

int main(){
    int num= -1323;
    int fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putnbr_fd(num, fd);
    close(fd);
}