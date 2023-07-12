/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:25 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/12 21:38:27 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

# define BUFF_SIZE 100
# define MALLCHECK(x) if (!x) return (-1);
# define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x == '\f')

void ft_bzero(void *s, int size);
int ft_isalnum(char ch);
int ft_isalpha(char ch);
int ft_isascii(char ch);
int ft_isdigit(char ch);
int ft_isprint(char ch);
void *ft_memcpy(void *d, void *s, int sizeSrc);
void *ft_memmove(void *d, void *s, int sizeSrc);
void *ft_memset(void *s, int value, int size);
int ft_strlcpy(char *dest, char *src, int sizeDest);
size_t		ft_strlen(const char *s);
int ft_toupper(int a);
int ft_toupper(int a);
char *ft_strchr(const char *str, int a);

#endif