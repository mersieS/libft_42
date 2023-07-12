/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:20:59 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 17:21:52 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(char ch) {
    if (ch >= 0 && ch < 127) {
        return 1;
    } else {
        return 0;
    }
}