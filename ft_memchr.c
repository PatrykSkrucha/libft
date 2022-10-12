/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:49:45 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/11 16:13:57 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*ptr;

	ptr = (char *)str;
	i = 0;
	if (*ptr == '\0')
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == c)
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

//    return(0);
// }                                DONE