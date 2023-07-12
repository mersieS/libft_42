/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:06 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 17:21:44 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *d, void *s, int sizeSrc){
    char *dest = (char*) d;
    const char *src = (const char*) s;

    int i = 0;
    while(i < sizeSrc){
        dest[i] = src[i];
        i++;    
    }

    return d;
}