/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:37:43 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/13 19:05:43 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t num){
    const char *s1;
    const char *s2;
    int i;

    i = 0;
    s1 = (const char *)str1;
    s2 = (const char *)str2;

    while(*(s1 + i) == *(s2 + i) && i < (int)num - 1){
      i++;
    }
    if(num)
            return(*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));

    return(0);
}