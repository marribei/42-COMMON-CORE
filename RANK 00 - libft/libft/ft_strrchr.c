/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:33:04 by marribei          #+#    #+#             */
/*   Updated: 2023/10/11 17:09:29 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	c = (unsigned char)c;
	ptr = NULL;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (ptr);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("teste", 'e'));
	printf("%s\n", ft_strrchr("teste", '\0'));
	printf("%s", ft_strrchr("", 'r'));
	return (0);
}*/
