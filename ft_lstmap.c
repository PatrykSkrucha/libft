/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:02:01 by pskrucha          #+#    #+#             */
/*   Updated: 2022/10/26 13:14:31 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*el;

	if (!lst)
		return (0);
	newlst = 0;
	while (lst)
	{
		el = ft_lstnew(f(lst->content));
		if (el)
			ft_lstadd_back(&newlst, el);
		else
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
			lst = lst->next;
	}
	return (newlst);
}