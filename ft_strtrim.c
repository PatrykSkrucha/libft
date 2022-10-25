/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:40:07 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/25 18:59:56 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	move_start(char const *s1, char const *set, int start)
{
	int	i;

	i = 0;
	while (s1[start] && set[i])
	{
		if (s1[start] == set[i])
		{
			i = 0;
			return (1);
		}
		i++;
	}
	return (0);
}

int	move_end(char const *s1, char const *set, int end)
{
	int	i;

	i = 0;
	while (s1[end] && set[i])
	{
		if (s1[end] == set[i])
		{
			i = 0;
			end--;
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (move_start(s1, set, start))
	{
		start++;
	}
	while (move_end(s1, set, end))
	{
		end--;
	}
	if (start >= end + 1)
		return (ft_strdup(""));
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

// int main()
// {
// 	char const *s1 = "      Hello     ";
// 	char const *set = " ";
// 	char *s2 = ft_strtrim("", "");
// 	puts(s2);
// }