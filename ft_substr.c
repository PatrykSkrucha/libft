/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:54:31 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/20 14:49:34 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*str;

	if (!s)
		return (NULL);
	if (s[0] == '\0' || len == 0)
		return (ft_strdup(""));
	str = (char *)s;
	if ((start > ft_strlen(str)))
		return (ft_strdup(""));
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	ptr = ft_calloc(len + 1, 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

// int main()
// {
//     // const char *s = "He";
//     char *a = ft_substr("hola", 4294967295, 18446744073709551615);
//     printf("%s", a);
// 	free(a);
// }