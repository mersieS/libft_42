/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:12 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 17:21:45 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int value, int size){
    unsigned char* str = (unsigned char*) s;

    int i = 0;
    while(i < size){
        str[i] = (unsigned char)value;
        i++;
    }

    return s;
}