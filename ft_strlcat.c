/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:46 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/15 14:36:24 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	int	i;
	int	j;
	size_t x;

	j = 0;
	i = ft_strlen(dst);
	x = i;
	if((int)dstsize < i)
		return (ft_strlen(src) + dstsize);
	if ((int)dstsize > i)
	{
		dstsize -= i;

			while (src[j] != '\0' && j < (int)dstsize - 1)
			{
				dst[i] = src[j];
				j++;
				i++;
			}
			dst[i] = '\0';
	}
	if((int)dstsize > j)
		return (ft_strlen(src) + x);
	return (ft_strlen(src) + ft_strlen(dst));
}


// int main()
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = 50;
// 	int b = strlcat(buff1, str, max);
// 	int a = ft_strlcat(buff2, str, max);
// 	printf("mine size:		%d\n", a);
// 	printf("or size:		%d\n", b);
// 	printf("or: string		%s\n", buff1);
// 	printf("mine: string		%s\n", buff2);
// 	return (0);
// }