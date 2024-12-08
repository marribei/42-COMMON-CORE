/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:13:12 by marribei          #+#    #+#             */
/*   Updated: 2023/11/28 01:10:10 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node_index;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node_index = *lst;
	while (node_index->next != NULL)
		node_index = node_index->next;
	node_index->next = new;
}

/*int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*last_node;

	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	last_node = (t_list *)malloc(sizeof(t_list));
	if (!node1 || !node2 || !last_node)
		return (1);
	node1->content = "Hello, world!";
	node1->next = node2;
	node2->content = "Hello, Lisbon!";
	node2->next = NULL;
	printf("Initial List: %s -> %s -> NULL\n", (char *)node1->content, 
		(char *)node2->content);
	last_node->content = "Hello, 42!";
	ft_lstadd_back(&node1, last_node);
	printf("Updated list: %s -> %s -> %s -> NULL\n", (char *)node1->content, 
		(char *) node1->next->content, (char *)node1->next->next->content);
	free(node1);
	return (0);
}*/
