/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:20:16 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 20:10:11 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size){
    size_t i;
    int j;

    size_t src_len;
    size_t dest_len;

    i = ft_strlen(dest);
    j = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if(size < dest_len + 1){
        return (src_len + size);
    }
    if(size > dest_len + 1){
        while (i < size - 1)
            *(dest + i++) = *(src + j++);
        *(dest + i) = '\0';
    }
    return (dest_len + src_len);
}

int main(){
    char str1[20] = "wor";
    char str2[] = "hedds";

    ft_strlcat(str1, str2, sizeof(str1));

    printf("%s, %s", str1, str2);
}