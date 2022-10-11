/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:52:17 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/11 14:34:45 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t to_find_size;

	to_find_size = ft_strlen(to_find);
	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && (int)i < (int)len)
		{
			j++;
			to_find_size--;
			if (to_find[j] == '\0' && !to_find_size)
				return ((char *)str + i);
		}
		to_find_size = ft_strlen(to_find);
		i++;
		j = 0;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "Hello";
// 	char tofind[] = "llo";
// 	size_t a = 3;
// 	puts(ft_strnstr(str, tofind, a));
// 	puts(strnstr(str, tofind, a));
// }