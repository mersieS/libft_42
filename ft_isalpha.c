/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:20:56 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 17:21:51 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char ch) {
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        return 1;
    } else {
        return 0;
    }
}
