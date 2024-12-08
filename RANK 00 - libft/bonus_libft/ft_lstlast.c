/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:46:14 by marribei          #+#    #+#             */
/*   Updated: 2023/11/26 20:02:45 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst -> next;
	return (lst);
}

/*int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;

	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));
	if (!node1 || !node2 || !node3)
		return (1);
	node1->content = "Let's";
	node1 -> next = node2;
	node2->content = "test";
	node2 -> next = node3;
	node3->content = "this!";
	node3 -> next = NULL;
	last_node = ft_lstlast(node1);
	printf("%s\n", (char *)last_node->content);
	free(node1);
	free(node2);
	free(node3);
	return(0);
}*/
