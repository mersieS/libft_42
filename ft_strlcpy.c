/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:20:04 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 19:05:01 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strlcpy(char *dest, char *src, int sizeDest){
    int sizeSrc = 0;
    while (sizeSrc < sizeDest - 1 && src[sizeSrc] != '\0')
    {
        dest[sizeSrc] = src[sizeSrc];
        sizeSrc++;
    }

    if(sizeDest > 0){
        dest[sizeSrc] = '\0';
    }

    while (src[sizeSrc] != '\0')
    {
        sizeSrc++;
    }
    
    return sizeSrc;
}