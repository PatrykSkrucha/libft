/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:46 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/13 14:35:02 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{	
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	dstsize -= i;
	while (src[j] != '\0' && j < dstsize - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + dstsize);
}
// int main()
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = 0;
// 	size_t i = strlcat(buff1, str, max);
// 	size_t y = ft_strlcat(buff2, str, max);
// 	printf("or size:		%zu\n", i);
// 	printf("mine size:		%zu\n", y);
// 	printf("or: string		%s\n", buff1);
// 	printf("mine: string	%s\n", buff2);
// 	return (0);
// }