/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:36:52 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/09 17:42:46 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	const char	*str;

	str = (const char *)s;
	i = 0;
	if ((int)n > 0 && (int)n <= (int)ft_strlen(str)+1)
	{
		while (i < n)
		{
			((char *)s)[i] = '\0';
			i++;
		}
	}
}

// int main()
// {
//     char a[] = "aaaaaaa";
// 	char a1[] = "aaaaaaa";
// 	printf("OR: %s\n", a);
// 	printf("moj: %s\n", a1);
// 	printf("or size: %zu\n", ft_strlen(a));
// 	printf("moj size: %zu\n", ft_strlen(a1));
//     bzero(a+1, 5);
//     ft_bzero(a1+1, 5);
// 	printf("size po or: %zu\n", ft_strlen(a));
// 	printf("size po moj: %zu\n", ft_strlen(a1));
// 	printf("OR po: %s\n", a);
// 	printf("moj po: %s\n", a1);
// }		DONE