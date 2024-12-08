/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:14:38 by marribei          #+#    #+#             */
/*   Updated: 2024/10/25 16:36:33 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	int	array[5] = {1, 2, 3, 4, 5};
	char	str[] = "teste";
	int	i;
	
	printf("Array before: ");
	i = 0;
	while (i < 5)
	{
		printf("%i ", array[i]);
		i++;
	}
	ft_bzero(array, 5 * sizeof(int));
	printf("\nArray after: ");
	i = 0;
	while (i < 5)
	{
		printf("%i ", array[i]);
		i++;
	}
	printf("\nString before: %s", str);
	ft_bzero(str, 5 * sizeof(char));
	printf("\nString after: %s", str);	
}*/
