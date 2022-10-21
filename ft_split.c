/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:37:30 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/21 14:57:24 by pskrucha         ###   ########.fr       */
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

int count_position(char const *s1, char c, int i, int start_or_end)
{


	while (s1[i])
	{
		if(start_or_end)
		{
			if (s1[i] != c)
				return (i);
			i++;
		}
		else
		{
			if (s1[i] == c)
				return (i);
			i++;
		}
	}
}

// char **ft_split(char const *s, char c)
// {
// 	char **str;
// 	int words;
// 	int start;
// 	int end;

// 	if (!s)
// 		return (NULL);
// 	start = 0;
// 	end = 0;
// 	words = count_words(s, c);
// 	str = (char **) malloc(words + 1);
// 	if (!str)
// 		return (NULL);
// 	start = count_position(s, c, start, 1);
// 	end = count_position(s, c, start, 0);
	
// 	return (str);
// }

char **dummy(char const *s, char c)
{
	char **str;
	int words;
	int start;
	int end;

	if (!s)
		return (NULL);
	start = 0;
	end = 0;
	words = count_words(s, c);
	str = (char **) malloc(words + 1);
	if (!str)
		return (NULL);
	while (words)
	{
		start = count_position(s, c, end, 1);
		end = count_position(s, c, start, 0);
		printf("start: %i\nend: %i\n", start, end);
		words--;
	}
	free(str);
	return (str);
}

int main ()
{
	char *string = "      split       this for   me  !       ";
// 	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
// 	char **result = ft_split(string, ' ');
	dummy(string, ' ');
	
}