/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:21:25 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/25 16:08:56 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

void ft_bzero(void *s, int size);
int ft_isalnum(char ch);
int	ft_isalpha(int str);
int	ft_isascii(int c);
int	ft_isdigit(int str);
int	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *d, const void *s, size_t len);
void *ft_memset(void *s, int value, int size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int a);
int ft_tolower(int a);
char *ft_strchr(const char *str, int a);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *ptr, int value, size_t num);
int ft_memcmp(const void *str1, const void *str2, size_t num);
char *ft_strnstr(const char *hs, const char *nd, size_t len);
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
void	ft_striteri(char *s, void (*f)(unsigned int , char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif