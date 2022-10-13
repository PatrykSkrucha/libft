/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:16:13 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/13 13:14:15 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*a;

	a = (char *)malloc(ft_strlen(src) + 1);
	if (a == NULL)
		return (NULL);
	ft_strlcpy(a, src, ft_strlen(src) + 1);
	return (a);
}

// done

// int main()
// {
// 	char a[] = "Hello";
// 	char *b = ft_strdup(a);
// 	puts(b);
// 	free(b);
// 	return (0);
// }