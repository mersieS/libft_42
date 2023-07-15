/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:35:06 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/15 17:38:50 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num, size_t size){
    size_t totalMem = num * size;

    void *ptr = malloc(totalMem);

    if(ptr != NULL){
        ft_memset(ptr, 0, totalMem);
    }

    return ptr;
}