/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:37:10 by marribei          #+#    #+#             */
/*   Updated: 2024/10/30 17:46:09 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *
	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little [0] == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i])
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *big = "What is it that we are hoping to find?";
	const char *little = "hoping";
	printf("%s", ft_strnstr(big, little, 32));
	return (0);
}*/
