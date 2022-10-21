/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:37:30 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/21 18:44:03 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s1, char c)
{
	int	i;
	int counter;
	int check;

	check = 0;
	counter = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			check = 1;
		}
		if ((s1[i] != c && check) || (!check && i == 0) )
		{
			counter++;
			check = 0;
		}
		i++;
	}
	return (counter);
}

unsigned int count_position(char const *s1, char c, int i, int start_or_end)
{
	while (s1[i])
	{
		if(start_or_end)
		{
			if (s1[i] != c)
				return (i);
		}
		else
		{
			if (s1[i] == c)
				return (i);
		}
			i++;
	}
	if(!start_or_end)
		return (ft_strlen(s1));
	return (0);
}

void clearall(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

char **ft_split(char const *s, char c)
{
	char **str;
	int words;
	unsigned int start;
	unsigned int end;
	int i;

	if (!s || c == '\0')
	{
		str = malloc(1);
		str[0] = NULL;
		return (str);
	}
	i = 0;
	start = 0;
	end = 0;
	words = count_words(s, c);
	if (!words)
		return (NULL);
	str =(char **) malloc(sizeof(char*) * words + 1);
	if (!str)
		return (NULL);
	while (i < words)
	{
		start = count_position(s, c, end, 1);
		end = count_position(s, c, start, 0);
		str[i] = (char *)malloc(sizeof(char*) * end - start + 1);
		if (!str[i])
		{
			clearall(str, i - 1);
			return (NULL);
		}
		str[i] = ft_substr(s, start, end - start);
		i++;
	}
	str[i] = NULL;	
	return (str);
}

// int main ()
// {
// char **s = ft_split("\0aa\0bbb", '\0');
// // int i = 0;
// // while (s[i])
// // {
// // 	printf("%s\n", s[i]);
// // 	i++;
// // }
// if (s[0] == NULL)
// 	printf("ss");
// else
// 	printf("nn");
// free(s);
// }

//gcc -Wall -Werror -Wextra ft_split.c ft_strlen.c ft_substr.c ft_strdup.c ft_calloc.c ft_strlcpy.c ft_bzero.c ft_memset.c && ./a.out