/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:40:49 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 20:59:48 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_toupper(int a){
    if(a >= 97 && a <= 122)
        return (a - 32);
    return (a);
}

int main(){
    char ch = 'a';
    

    printf("%c", ft_toupper(ch));
}