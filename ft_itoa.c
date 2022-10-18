/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:23 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/18 20:35:45 by pskrucha         ###   ########.fr       */
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

	s = str_size(n);
	str = (char *) malloc(s);
	s--;
	str[s] = '\0';
	if(n > 0)
	{
		while(n > 0)
		{	
			s--;
			str[s] = n %10 + '0';
			n /= 10;
		}
	}
	if(n < 0)
	{
		while(n < 0)
		{	
			s--;
			str[s] = n %10 + '0';
			n /= 10;
		}
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
// 	ft_itoa(20);
// }