/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:53:10 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/18 14:33:09 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar(n + '0', fd);
}

