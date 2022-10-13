/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:51:10 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/13 20:11:20 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (str1[i] == str2[i] && (str1[i] != '\0' && str2[i] != '\0')
		&& i < n - 1)
	{
			i++;
	}
	return (str1[i] - str2[i]);
}
// done

// void funny(size_t a)
// {
// 	if((int)a>0)
// 		printf("aa");
// 	else
// 		printf("bb");
// }

// int main()
// {
// 	char a[] = "\0AA";
// 	char b[] = "BB";
// 	int i = strncmp(a, b, -10);
// 	int i1 = ft_strncmp(a, b, -10);
// 	printf("or: %i", i);
// 	printf("mine: %i", i1);
// 	// funny(-10);

// 	return 0;
// }