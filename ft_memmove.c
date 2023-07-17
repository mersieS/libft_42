/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:09 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/17 14:57:56 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *d, void *s, int sizeSrc){
    unsigned char *dest = (unsigned char*) d;
    const unsigned char *src = (const unsigned char*) s;

    if(src < dest){
        int i = sizeSrc;
        while(i > 0){
            dest[i - 1] = src[i - 1];
            i--;
        }
    }
    else {
        int i = 0;
        while(i < sizeSrc){
            dest[i] = src[i];
            i++;
        }
    }

    return d;
}