/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:15:11 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/12 15:16:22 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *ft_strchr(const char *str, int c)
// {
// 	size_t		i;
// 	int x;

// 	i = 0;
// 	x = 0;

// 	while (*(str + i) != c)
// 	{
// 		if (str[i] == c)
// 			return ((void *) str + i);
// 		i++;
// 	}

// 		return (NULL);

// }

char *ft_strchr(const char *str, int c)
{
	size_t		i;
	// const char	*ptr;

	// ptr = (char *)str;
	i = 0;
	// if (*str == '\0' && c != '\0')
	// 	return (NULL);
	if(c == '\0')
	{
		while(*str)
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
// 	const char str[] = "http://www.tutorialspoint.com";
// 	const char ch = '\0';
// 	const char str1[] = "http://www.tutorialspoint.com";
// 	const char ch1 = '\0';
// 	char *ret;
// 	char *ret1;

// 	ret = strchr(str, ch);
// 	ret1 = ft_strchr(str1, ch1);

// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	printf("String after |%c| is - |%s|\n", ch1, ret1);
	
	
	
// 	return(0);
// }