/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:15:45 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/11 18:51:10 by pskrucha         ###   ########.fr       */
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
extern void	ft_bzero(void *s, size_t n);
extern void    *calloc(size_t nelem, size_t elsize);
extern int	ft_isalnum(int argument);
extern int	ft_isalpha(int c);
extern int	ft_isascii(int c);
extern int	ft_isdigit(int a);
extern int	ft_isprint(int c);
extern void	*ft_memchr(const void *str, int c, size_t n);
extern int	ft_memcmp(const void *str1, const void *str2, size_t n);
extern void	*ft_memcpy(void *destination, const void *source, size_t num);
extern void *ft_memmove(void *dest, const void *src, size_t n);
extern void	*ft_memset(void *str, int c, size_t n);
extern char *strchr(const char *str, int c);
extern size_t	ft_strlcpy(char *dest, const char *src, size_t size);


#endif