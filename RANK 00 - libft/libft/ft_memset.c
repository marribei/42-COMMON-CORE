/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:36:13 by marribei          #+#    #+#             */
/*   Updated: 2024/10/25 16:30:43 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[] = "Let's test this";
	int	array[5] = {1, 2, 3, 4, 5};
	int	i;

	printf("String before memset: %s\n", str);
	ft_memset(str, '.', 5 * sizeof(char));
	printf("String after memset: %s\n", str);
	printf("Array of integers before memset: ");
	i = 0;
	while (i < 5)
	{
		printf("%i ", array[i]);
		i++;
	}
	ft_memset(array, 0, 3 * sizeof(int));
	printf("\nArray of integers after memset: ");
	i = 0;
	while (i < 5)
	{
		printf("%i ", array[i]);
		i++;
	}
	return (0);
}*/
