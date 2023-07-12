/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:20:53 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 17:21:34 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(char ch) {
    if ((ch >=  48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        return 1;
    } else {
        return 0;
    }
}
