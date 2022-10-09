/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:19:11 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/09 17:43:13 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	char		*dest;
	const char	*src;

	dest = (char *)destination;
	src = (const char *)source;
	while (num)
	{
		num--;
		dest[num] = src[num];
	}
	return (dest);
}

int main()
{
	char a[] = "123456789";
	char a1[] = "123456789";
	puts(a);
	puts(a1);
	memcpy(a+4, a+3, 3);
	ft_memcpy(a1+4, a1+3, 3);
	puts(a);
	puts(a1);
}

//DONE ??????