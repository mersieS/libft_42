/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:18:16 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/16 04:20:09 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set){

    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(s1) - 1;

    if(s1 == NULL || set == NULL)
        return NULL;

    while(*((const char *)s1 + i) && ft_strchr(set, (*(const char *)s1 + i)))
        i++;

    while(j > i && ft_strchr(set, (*(const char *)s1 + i)))
        j--;

    size_t trim_len = j - i + 1;
    char *trim = (char *)malloc((trim_len + 1) * sizeof(char));

    if(trim == NULL)
        return NULL;

    ft_strncpy(trim, s1 + i, trim_len);


    trim[trim_len] = '\0';

    return trim;
}

int main() {
        char *s = "bbbabbbbabbb\n";
    char *a = "a";

    printf("%s",ft_strtrim(s, a));
}