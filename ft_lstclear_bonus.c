/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:34:07 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/23 19:47:24 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlist;
	t_list	*list;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		nlist = list->next;
		ft_lstdelone(list, del);
		list = nlist;
	}
	*lst = NULL;
	list = NULL;
	nlist = NULL;
}
