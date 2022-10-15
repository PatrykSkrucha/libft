/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:46 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/15 20:57:22 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	int		i;
	int		j;
	size_t	x;

	j = 0;
	i = 0;
	if (dst)
		i = (int)ft_strlen(dst);
	x = i;
	if ((int)dstsize <= i)
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
	if ((int)dstsize > j)
		return (ft_strlen(src) + x);
	return (ft_strlen(src) + ft_strlen(dst));
}

// int main()
// {
// 	char dest[30]; 
// 	memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	strlcat(dest, src, 0);
// 	dest[0] = 'B';
// 	ft_strlcat(dest, src, 1);
// 	memset(dest, 'B', 4);
// 	ft_strlcat(dest, src, 3);
// 	ft_strlcat(dest, src, 6);
// 	memset(dest, 'C', 5);
// 	// printf("size ret: %zu", (strlen(dest) + strlen(src)));
// 	// printf("%zu", ft_strlcat(dest, src, -1));
// 	printf("%s", dest);
// 	return (0);
// }