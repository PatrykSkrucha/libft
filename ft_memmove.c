/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:16 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/11 14:49:16 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest_ptr;
	char *src_ptr;
	size_t i;


	//	zrobic buffer z strdup 
	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	i = 0;
	while(i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}

	//tutaj free
	return ((void *)dest_ptr);
}

// int main()
// {
// 	char a[] = "abcde";
// 	puts(a);
// 	memmove(a, a+2, 3);
// 	puts(a);
// }