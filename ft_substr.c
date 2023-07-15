/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:00:55 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/15 21:10:25 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    unsigned int i;
    char *sub;

    i = 0;
    sub = (char *)ft_calloc(len, 1);

    while((char *)s && (char *)sub != NULL){
        if(start == i){
            ft_strncpy((char *)sub, (const char *)s + i, len);
            break;
        }
        i++;
    }
    
    return ((char *)sub);
}