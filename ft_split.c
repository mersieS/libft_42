/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:47:07 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/16 23:34:13 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *newstr(size_t size){
    char *str;

    str = (char *)malloc(size * sizeof(char) + 1);
    if(!str)
        return NULL;

    ft_bzero(str, size + 1);
    return str;
}

int countword(char const *str, char c){
    int count;
    int i;

    i = 0;
    count = 0;
    while(str[i] != '\0'){
        while(str[i] == c)
            i++;
        if(str[i] != c && str[i] != '\0')
            count++;
        while(str[i] != c && str[i] != '\0')
            i++;
    }
    return count;
}

static int get_len(char const *str, char c){
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i] == c)
        i++;
    while (str[i] != c && str[i] != '\0'){
        i++;
        len++;
    }
    return len;
}

char **ft_split(char const *s, char c){
    int i;
    int j;
    int k;
    char **str2;

    if(!s || !(str2 = (char **)malloc(sizeof(*str2) * (countword(s, c) + 1))))
        return NULL;

    i = -1;
    j = 0;
    while(++i < countword(s, c)){
        k = 0;
        if(!(str2[i] = newstr(get_len(&s[j], c + 1))))
            str2[i] = NULL;
        while(s[j] == c)
            j++;
        while(s[j] != c && s[j])
            str2[i][k++] = s[j++];
        str2[i][k] = '\0';
    }
    str2[i] = 0;
    return str2;
}