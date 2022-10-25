/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:57:39 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/25 15:39:53 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		return (NULL);
	// if (lst->next == NULL)
	// 	return (lst);
	// return (ft_lstlast(lst->next));
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}