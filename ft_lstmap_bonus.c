/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:52:23 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/23 21:30:14 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*fnode;

	if (!lst || !f || !del)
		return (NULL);
	fnode = NULL;
	while (lst)
	{
		nlist = ft_lstnew(f(lst->content));
		if (!nlist)
		{
			ft_lstclear(&fnode, del);
			return (NULL);
		}
		if (!fnode)
			fnode = nlist;
		else
			ft_lstadd_back(&fnode, nlist);
		lst = lst->next;
	}
	return (fnode);
}
