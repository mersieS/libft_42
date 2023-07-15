/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:54:21 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/15 19:58:49 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str){
    size_t len = ft_strlen(str) + 1;


    char *duplicate = (char *)malloc(len * sizeof(char));

    if(duplicate != NULL)
        ft_strcpy(duplicate, (char *)str);

    return duplicate;
}