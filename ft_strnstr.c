/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:27:52 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/13 20:42:14 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *hs, const char *nd, size_t len){

    int i;
    int j;
    int k;
    int hs_len;
    int nd_len;

    i = 0;
    j = 0;
    k = 0;
    hs_len = (int)len;
    nd_len = strlen(nd);
    
    if(hs_len < nd_len)
        return (NULL);

    while((*(hs + i) != '\0' && *(nd + j) != '\0') 
        && (i < hs_len)){
        if(*((const char *)hs + i) == *((const char *)nd + j))
            j++;
        if(j == 0)
            k++;
        i++;
    }

    if(j == nd_len)
        return ((char *) hs + k);

    return (NULL);
}