/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:10:14 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/16 01:16:44 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2){
    size_t s1_len = ft_strlen(s1);
    size_t s2_len = ft_strlen(s2);
    
    char *str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

    if(s1 == NULL || s2 == NULL){
        return NULL;
    }

    ft_strcpy(str, s1);
    ft_strcat(str, s2);

    return str;
}