#include  "libft.h"
#include <stdio.h>

static void reverse(char *str, int length){
    char *start;
    char *end;
    char temp;

    start = str;
    end = str + length - 1;
    while (start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

char *ft_itoa(int num){
    int is_negative;
    
    if(num < 0){
        is_negative = 1;
        num = -num;
    }

    int num_digits;
    int temp;
    
    num_digits = (num == 0) ? 1 : 0;
    temp = num;
    while (temp != 0)
    {
        num_digits++;
        temp /= 10;
    }

    char *str;
    
    str = (char *)malloc((num_digits + 1 + is_negative) * sizeof(char));
    if(str == NULL)
        return(NULL);

    char *p;
    int remind;
    
    p = str;
    while (num != 0){
        remind = num % 10;
        *p++ = '0' + remind;
        num /= 10;
    }

    if (is_negative){
        *p++ = '-';
    }

    *p = '\0';

    reverse(str, num_digits + is_negative);
    return (str);
}
