#include "libft.h"
#include <fcntl.h>

static void rev(char buf[], char *ptr, int fd){
    while (ptr > buf){
        ptr--;
        ft_putchar_fd(*ptr, fd);
    }
}

void ft_putnbr_fd(int n, int fd){
    char buf[10];
    char *ptr;
    int is_negative;

    ptr = buf;
    is_negative = 0;

    if(n < 0){
        is_negative = 1;
        n = -n;
    }

    while(n > 0){
        *ptr = '0' + (n % 10);
        n /= 10;
        ptr++;
    }

    if(is_negative){
        *ptr = '-';
         ptr++;
    }

    rev(buf, ptr, fd);
}