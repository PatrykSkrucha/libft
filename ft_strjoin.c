/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:02:42 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/17 18:34:50 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = 0;
	s2_len = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s2_len = ft_strlen(s2);
	if (s2 == NULL)
		s1_len = ft_strlen(s1);
	else
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
	}
	str = (char *)malloc(s1_len + s2_len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcpy(str + s1_len, s2, s2_len + 1);
	return (str);
}

// int main()
// {
// 	char const *s1 = "Hello ";
// 	char const *s2 = "world!";
// 	char *s3 = ft_strjoin(s1, s2);
// 	puts(s3);
// 	return (0);
// }