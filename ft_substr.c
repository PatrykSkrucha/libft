/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:54:31 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/18 13:19:26 by pskrucha         ###   ########.fr       */
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
	str = (char *)s;
	i = ft_strlen(s + start);
	if (start >= (unsigned int)ft_strlen(str))
	{
		ptr = ft_calloc(1, 1);
		return (ptr);
	}
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
//     const char *s = "He";
//     char *a = ft_substr(s, 3, 2);
//     printf("%s", a);
// 	free(a);
// }