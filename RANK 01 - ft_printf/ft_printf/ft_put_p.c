/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:43:44 by marribei          #+#    #+#             */
/*   Updated: 2024/11/16 17:13:15 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(void *ptr)
{
	unsigned long	adress;
	char			*hexa;

	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	adress = (unsigned long)ptr;
	hexa = "0123456789abcdef";
	write(1, "0x", 2);
	return (ft_base16(adress, hexa) + 2);
}

/*int	main(void)
{
	char	*str = "Hello, 42!";
	void	*ptr;

	ptr = &str;
	printf("MY RESULTS:\n");
	ft_put_p(ptr);
	printf("\n\nORIGINAL PRINTF:\n%p", ptr);
	return (0);
}*/
