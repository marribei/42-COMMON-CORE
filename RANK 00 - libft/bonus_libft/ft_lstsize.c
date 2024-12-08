/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:20:14 by marribei          #+#    #+#             */
/*   Updated: 2023/11/26 20:03:34 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));
	if (!node1 || !node2 || !node3)
		return (1);
	node1->content = "Doesn't matter";
	node1 -> next = node2;
	node2->content = "what I write here";
	node2 -> next = node3;
	node3->content = "as long as the answer is 3";
	node3 -> next = NULL;
	printf("%i\n", ft_lstsize(node1));
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/
