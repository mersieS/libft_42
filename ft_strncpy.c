/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:37:06 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/15 21:06:05 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n){
    size_t i;

    i = -1;
    while(++i < n ){
        if(*(src + i))
            *(dest + i) = *(src + i);
        else
            while (i < n)
                *(dest + i++) = '\0';
    }
    return (dest);
}