/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:25 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/17 09:40:44 by sbuker           ###   ########.fr       */
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
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int a);
int ft_toupper(int a);
char *ft_strchr(const char *str, int a);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *ptr, int value, size_t num);
int ft_memcmp(const void *str1, const void *str2, size_t num);
char *strnstr(const char *hs, const char *nd, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t num, size_t size);
char *ft_strdup(const char *str);
char	*ft_strcpy(char *dst, const char *src);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strjoin(char const *s1, char const *s2);
char	*ft_strcat(char *s1, const char *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));


#endif