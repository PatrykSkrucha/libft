/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:15:45 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/18 12:56:00 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

extern size_t	ft_strlen(const char *);
extern void	*ft_memcpy(void *destination, const void *source, size_t num);
extern int   ft_atoi(const char *str);
extern void	    ft_bzero(void *s, size_t n);
extern void     *ft_calloc(size_t nelem, size_t elsize);
extern int      ft_isalnum(int argument);
extern int	    ft_isalpha(int c);
extern int	    ft_isascii(int c);
extern int      ft_isdigit(int a);
extern int      ft_isprint(int c);
extern void     *ft_memchr(const void *str, int c, size_t n);
extern int      ft_memcmp(const void *str1, const void *str2, size_t n);
extern void	    *ft_memcpy(void *destination, const void *source, size_t num);
extern void     *ft_memmove(void *dest, const void *src, size_t n);
extern void	    *ft_memset(void *str, int c, size_t n);
extern char     *ft_strchr(const char *str, int c);
extern size_t	ft_strlcpy(char *dest, const char *src, size_t size);
extern size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
extern int	    ft_toupper(int c);
extern int	    ft_tolower(int c);
extern char     *strrchr(const char *str, int c);
extern char     *ft_strrchr(const char *str, int c);
extern void     *ft_calloc(size_t nelem, size_t elsize);
extern int	    ft_strncmp(const char *s1, const char *s2, size_t n);
extern char	    *ft_strnstr(const char *str, const char *to_find, size_t len);
extern char     *ft_strdup(const char *src);
extern char     *ft_substr(char const *s, unsigned int start, size_t len);
extern char	    *ft_strjoin(char const *s1, char const *s2);
extern char     *ft_strtrim(char const *s1, char const *set);
extern void     ft_putchar_fd(char c, int fd);
extern char     *ft_strmapi(char const *s, char (*f)(unsigned int, char));


#endif