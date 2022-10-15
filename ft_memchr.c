/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:49:45 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/15 19:33:31 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	char		*ptr;
	char		a;

	ptr = (char *)str;
	i = 0;
	a = c;
	while (i < n)
	{
		if (ptr[i] == a)
			return ((void *) ptr + i);
		i++;
	}
	return (NULL);
}
// int main () {
//    const char str[] = "";
//    const char ch = 'x';
//    char *ret;
//    char *ret1;

//    ret = memchr(str, ch, strlen(str));
//    ret1 = ft_memchr(str, ch, strlen(str));

//    printf("orString after |%c| is - |%s|\n", ch, ret);

//    printf("mojaString after |%c| is - |%s|\n", ch, ret1);
// 	char s[] = {1, 0, 1, 2 ,3 ,4 ,5};
// 	// printf("%s\n",ft_memchr(s, 2 + 256, 3));
// 	printf("%c", s[1]);
// 	return(0);
// }                                