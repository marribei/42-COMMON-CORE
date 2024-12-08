/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:52:17 by marribei          #+#    #+#             */
/*   Updated: 2023/11/28 00:22:26 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node_index;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		node_index = *lst;
		*lst = node_index->next;
		(*del)(node_index->content);
		free(node_index);
	}
	*lst = NULL;
}
