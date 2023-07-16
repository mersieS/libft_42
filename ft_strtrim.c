/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:55:41 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/16 20:44:06 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char c, char const *set) {
    while (*set) {
        if (c == *set)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
    if (s1 == NULL || set == NULL)
        return NULL;

    char const *start = s1;
    char const *end = s1;

    while (is_in_set(*start, set))
        start++;

    while (*end)
        end++;

    while (end > start && is_in_set(*(end - 1), set))
        end--;

    int len = end - start;
    char *trimmed = (char *)malloc((len + 1) * sizeof(char));
    if (trimmed == NULL)
        return NULL;

    char *ptr = trimmed;
    while (len--)
        *ptr++ = *start++;

    *ptr = '\0';

    return trimmed;
}