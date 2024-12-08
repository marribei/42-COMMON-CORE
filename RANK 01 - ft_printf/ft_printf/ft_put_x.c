/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:27:42 by marribei          #+#    #+#             */
/*   Updated: 2024/11/16 17:11:49 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned int n, const char format)
{
	char	*hexa;

	hexa = NULL;
	if (format == 'x')
		hexa = "0123456789abcdef";
	else if (format == 'X')
		hexa = "0123456789ABCDEF";
	if (hexa)
		return (ft_base16(n, hexa));
	else
		return (0);
}

int	ft_base16(unsigned long n, char *hexa)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_base16((n / 16), hexa);
		len += ft_base16((n % 16), hexa);
	}
	else
	{
		ft_put_c(hexa[n]);
		return (1);
	}
	return (len);
}

/*int	main(void)
{
	printf("MY RESULTS:\n");
	ft_put_x(-123987, 'x');
	printf("\n");
	ft_put_x(123987, 'X');

	printf("\n\nORIGINAL PRINTF:\n%x,\n%X", -123987, 123987);
	return (0);
}*/
