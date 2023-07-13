/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:40:56 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/13 15:56:22 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c){
    int i;
    i = ft_strlen(str);

    while(i--){
        if(*(str + i) == (char)c)
            return ((char *)str + i);
    }
    return (NULL);
}