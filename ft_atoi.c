/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:45:29 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/15 16:46:26 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    
    while (*str == ' ')
        str++;

    if (*str == '+' || *str == '-')
        sign = (*str++ == '-') ? -1 : 1;

    while (ft_isdigit(*str))
        result = result * 10 + (*str++ - '0');

    return result * sign;
}