/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:46 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/11 14:33:43 by pskrucha         ###   ########.fr       */
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
	return (ft_strlen(dst) + ft_strlen(src));
}
// int main()
// {
// 	char dst[100] = "bb\0";
// 	char src[100] = "aa";
// 	char dst1[100] = "bb";
// 	char src1[100] = "aa";
// 	printf("moja: %lu %s\n", ft_strlcat(dst, src, 1), dst);
// 	printf("or: %lu %s", strlcat(dst1, src1, 1), dst1);
// 	return (0);
// }