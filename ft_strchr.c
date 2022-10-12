/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:15:11 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/11 18:56:52 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strchr(const char *str, int c)
{
	size_t		i;
	const char	*ptr;

	ptr = (char *)str;
	i = 0;
	if (*ptr == '\0')
		return (NULL);
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			return ((void *) ptr + i);
		i++;
	}
	return (NULL);
}

int main () {
	// const char str[] = "http://www.tutorialspoint.com";
	// const char ch = '.';
	// const char str1[] = "http://www.tutorialspoint.com";
	// const char ch = '.';
	// char *ret;

	// ret = strchr(str, ch);

	// printf("String after |%c| is - |%s|\n", ch, ret);
	char a[] = "Jel\0o";
	printf("%zu", ft_strlen(a));
	
	return(0);
}