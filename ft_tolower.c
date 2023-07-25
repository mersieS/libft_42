/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:08:28 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/25 14:33:55 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int a){
    if(a >= 65 && a <= 90)
        return (a + 32);
    return (a);
}