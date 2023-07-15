/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:00:55 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/15 22:08:11 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    if (start >= ft_strlen(s)) {
        return NULL;
    }

    char* substr = (char*)malloc((len + 1) * sizeof(char));  

    if (substr == NULL) {
        return NULL;  
    }

    ft_strncpy(substr, s + start, len);  

    substr[len] = '\0'; 

    return substr;
}