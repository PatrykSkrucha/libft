/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:47:28 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/15 20:40:49 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*a;

	if ((nelem == SIZE_MAX && elsize > 1) || (elsize == SIZE_MAX && nelem > 1))
		return (NULL);
	a = (void *)malloc(nelem * elsize);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, nelem * elsize);
	return (a);
}

// int main () {
// 	int size = 8539;

	// void * d1 = ft_calloc(SIZE_MAX, SIZE_MAX);
// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)) == 0)
// 		printf("sukces");
// 	else
// 		printf("fial");
// 	free(d1);
// 	free(d2);
// 	if(d1 == NULL)
// 		printf("sukces");
// 	else
// 		printf("fial");
//    return(0);
// }