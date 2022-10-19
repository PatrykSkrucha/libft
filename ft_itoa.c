/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:23 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/19 13:42:36 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_size (int n)
{
	int i;

	i = 1;
	if (n == 0)
		return (2);
	if (n > 0)
	{
		while (n >= 1)
		{
			n /= 10;
			i++;
		}
	}
	else
	{
		i++;
		while (n <= -1)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}

char *ft_itoa(int n)
{
	int	s;
	char *str = "aa";
	int sign;
	int min_value;

	s = str_size(n);
	min_value = 0;
	str = (char *) malloc(s);
	if(str == NULL)
		return (NULL);
	sign = 0;
	s--;
	str[s] = '\0';
	if (n == -2147483648)
	{
		min_value++;
		n = -214748364;
	}
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	if(min_value)
	{
		s--;
		str[s] = '8';
	}
	while(n >= 1)
	{	
		s--;
		str[s] = n %10 + '0';
		n /= 10;
	}
	if(sign)
	{
		s--;
		str[s] = '-';
	}
	if (n == 0)
	{
		s--;
		str[s] = '0';
	}
	return (str);
}

// int main()
// {
// 	char *s = ft_itoa(156);
// 	puts(s);
// }