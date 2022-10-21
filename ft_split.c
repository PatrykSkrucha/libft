/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:37:30 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/21 12:30:38 by pskrucha         ###   ########.fr       */
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
		if (s1[i] != c && check)
		{
			counter++;
			check = 0;
		}
		i++;
	}
	return (counter);
}

// char **ft_split(char const *s, char c)
// {

// 	char **str = (char **)malloc(4);

// 	return (str);
// }

int main ()
{
// 	char *string = "      split       this for   me  !       ";
// 	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
// 	char **result = ft_split(string, ' ');
	printf("%i", count_words("aan", 'n'));
}