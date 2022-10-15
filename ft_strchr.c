/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:15:11 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/15 19:30:58 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;
	int		i;

	i = 0;
	a = c;
	if (a == '\0')
	{
		while (*str)
		{
			str++;
		}
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == a)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}

// int main () {
// 	const char str[] = "\0http://www.tutorialspoint.com";
// 	const char ch = '\0';
// 	const char str1[] = "\0http://www.tutorialspoint.com";
// 	const char ch1 = '\0';
// 	char *ret;
// 	char *ret1;

// 	ret = strchr(str, ch);
// 	ret1 = ft_strchr(str1, ch1);

// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	printf("String after |%c| is - |%s|\n", ch1, ret1);
// 	char s[] = "tripouille";
// 	puts(ft_strchr(s, 't' + 256));

// 	return(0);
// }
