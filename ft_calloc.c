/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:47:28 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/14 16:07:29 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*a;

	a = (void *)malloc(nelem * elsize);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, nelem * elsize);
	return (a);
}

// int main () {
// 	int size = 8539;

// 	void * d1 = ft_calloc(size, sizeof(int));
// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("sukces");
// 	else
// 		printf("fial");
// 	free(d1);
// 	free(d2);
//    return(0);
// }