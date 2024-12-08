/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:04:31 by marribei          #+#    #+#             */
/*   Updated: 2023/11/26 20:11:15 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*node1;
	t_list	*new_node;

	node1 = (t_list *)malloc(sizeof(t_list));
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!node1 || !new_node)
		return (1);
	node1->content = "Hello, world!";
	node1->next = NULL;
	printf("Initial List: %s -> NULL\n", (char *)node1->content);
	new_node->content = "Hello, 42!";
	new_node->next = NULL;
	ft_lstadd_front(&node1, new_node);
	printf("Updated list: %s -> %s -> NULL\n", (char *)node1->content, 
		(char *)node1->next->content);
	free(new_node);
	return (0);
}*/
