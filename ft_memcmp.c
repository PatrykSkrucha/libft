/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:14:35 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/13 12:21:40 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned const char	*s1;
	unsigned const char	*s2;

	i = 0;
	s1 = (unsigned const char *)str1;
	s2 = (unsigned const char *)str2;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1)
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

// int main () {
//    char str2[15];
//    char str1[15];
//    int ret;

//    char str12[15];
//    char str11[15];
//    int ret1;
//    memcpy(str1, "123456", 6);
//    memcpy(str2, "ABCDEF", 6);

//    ret = memcmp(str1, str2, 5);
//    printf("%i\n", ft_memcmp(str2, str1, -1));
//    printf("%i", memcmp(str2, str1, -1));

//    if(ret > 0) {
//       printf("str2 is less than str1\n");
//    } else if(ret < 0) {
//       printf("str1 is less than str2\n");
//    } else {
//       printf("str1 is equal to str2\n");
//    }
//    ft_memcpy(str11, "abcdef", 6);
//    ft_memcpy(str12, "ABCDEF", 6);
//    if(ret1 > 0) {
//       printf("str12 is less than str11");
//    } else if(ret1 < 0) {
//       printf("str11 is less than str12");
//    } else {
//       printf("str11 is equal to str12");
//    }
//    // char a[] = "\0aaa";
//    // funk(a);

// }
// 		DONE 
