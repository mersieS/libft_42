/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:24:25 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 21:40:46 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int a){
    int i;
    i = -1;
    while (++i < (int)ft_strlen(str) + 1){
        if(*(str + i) == (char)a){
            return((char *)str + i);
        }
    }
    return (NULL);
    
}