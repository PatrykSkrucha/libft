/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:23 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/20 15:05:49 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_size(int n)
{
	int	i;

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

void	extra_one(int n, int sign, char *str, int s)
{
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	while (n >= 1)
	{	
		s--;
		str[s] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
	{
		s--;
		str[s] = '-';
	}
}

char	*ft_itoa(int n)
{
	int		s;
	char	*str;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	s = str_size(n);
	str = (char *) malloc(s);
	if (str == NULL)
		return (NULL);
	sign = 0;
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	s--;
	str[s] = '\0';
	extra_one(n, sign, str, s);
	return (str);
}

// int main()
// {
// 	char *s = ft_itoa(1000034);
// 	puts(s);
// 	free(s);
// }