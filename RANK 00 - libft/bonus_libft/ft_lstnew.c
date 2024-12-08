/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:46:48 by marribei          #+#    #+#             */
/*   Updated: 2023/11/26 20:03:15 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

/*int main(void)
{
	char	*content_example1 = "Hello, World!";
	int	content_example2 = 42;
	t_list	*node1 = ft_lstnew(content_example1);
	t_list	*node2 = ft_lstnew(&content_example2);

	if (!node1 || !node2)
		return (1);
	printf("Node1: %s\n", (char *)node1->content);
	printf("Node2: %i\n", *(int *)node2->content);
	free(node1);
	free(node2);
	return (0);
}*/
