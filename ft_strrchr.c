/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:02:08 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/14 13:42:57 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while ((int)i >= 0)
	{
		if (str[i] == c)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}

// int main()
// {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;
//    const char str1[] = "http://www.tutorialspoint.com";
//    const char ch1 = '.';
//    char *ret1;

//    ret = strrchr(str, ch);
//    ret1 = ft_strrchr(str1, ch1);

//    printf("String after or |%c| is - |%s|\n", ch, ret);
//    printf("String after mi |%c| is - |%s|\n", ch1, ret1);
//    return(0);

// }