/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:48:38 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/08 13:29:15 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void * ft_memmove ( void * destination, const void * source, size_t num )
{
    size_t i;
    void *ptr;

    ptr = destination;
    i = 0;
    while(i < num)
    {
        ((char*)ptr)[i] = ((char*)source)[i];
        i++;
    }
    return (ptr);
}

int main()
{
    // int src[10] = {1,0,3,4,5, 1, 1, 1,1, 1};
    // int dest[3] = {20,5};
    // int src1[10] = {1,0,3,4,5, 1, 1, 1,1, 1};
    // int dest1[3] = {20,5};
    // printf("or przed: %i\n", src[0]);
    // memmove(src+1, dest+1, 1);
    // printf("moja przed: %i\n", src1[0]);
    // ft_memmove(src1+1, dest1+1, 1);
    // printf("or po: %i, %i\n", src[0], src[1]);
    // printf("moja po: %i, %i\n", src1[0], src1[1]);
    char str[] = "memmove can be very useful......";
  memmove (str+20,str+15,11);
  puts (str);
    return (0);
    
}