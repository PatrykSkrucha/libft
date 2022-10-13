/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:15:11 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/13 13:12:01 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;

	i = 0;
	if (c == '\0')
	{
		while (*str)
		{
			str++;
		}
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}

// void ft_funk(char *str)
// {
// 	int i = 0;
// 	while(*str + i)
// 	{
// 		printf("jest");
// 		i++;
// 	}
// }

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

// 	return(0);
// }
