/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:57:32 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/13 17:35:56 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t num){
    const char *sc;
    size_t i;

    sc = (const char *)ptr;
    i = -1;
    while(++i < num){
        if(*(sc + i) == (char)value)
            return ((void *)sc + i); 
    }
    return (NULL);
}