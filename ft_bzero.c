/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:36:52 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/08 16:17:41 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
void    ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;

    while(i < n)
    {
        ((char *)s)[i] = '\0';
        i++;
    }
}

int main()
{
    char a[] = "aaaaaaa";

    bzero(a+2, 2);
    printf("%lu", strlen(a));
    puts(a);

}

