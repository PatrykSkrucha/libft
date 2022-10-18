/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:52:17 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/18 12:59:56 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str == NULL && len == 0)
		return (NULL);
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
		j = 0;	
	}
	return (NULL);
}

// int main()
// {
	// char haystack[30] = "aaabcabcd";
	// char needle[10] = "aabc";
	// char *s1 = "oh no not the empty string !";
	// char *s2 = "";
	// size_t max = -1;
	// char *i1 = strnstr(s1, s2, max);
	// char *i2 = ft_strnstr(s1, s2, max);
	// puts(i1);
	// puts(i2);
// 	printf("%s",ft_strnstr(((void *)0), "fake", 3));
// }