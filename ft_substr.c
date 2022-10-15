/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:54:31 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/15 18:34:27 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *ptr;

	i = ft_strlen(s + start);
	if((size_t)start >= ft_strlen(s))
		return (NULL);
	if(i < len)
		len = i;
	ptr = ft_calloc(len + 1, 1);
	if(ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

// int main()
// {
//     const char *s = "He";
//     char *a = ft_substr(s, 3, 2);
//     printf("%s", a);
// 	free(a);
// }