/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:19:11 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/13 12:28:12 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	char		*dest;
	const char	*src;

	dest = (char *)destination;
	src = (const char *)source;
	if (dest == NULL && src == NULL)
		return (0);
	while (num)
	{
		num--;
		dest[num] = src[num];
	}
	return (dest);
}

// int main()
// {
// 	// char a[] = "";
// 	char a1[] = "255668";
// 	// puts(a);
// 	puts(a1);
// 	// memcpy(a+4, a+3, 0);
// 	memcpy(a1, ((void *)0), 3);
// 	// puts(a);
// 	puts(a1);
// }

//DONE 