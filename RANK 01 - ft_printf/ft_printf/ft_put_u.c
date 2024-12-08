/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:43:01 by marribei          #+#    #+#             */
/*   Updated: 2024/11/15 18:06:18 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_put_u(n / 10);
	len += ft_put_c('0' + (n % 10));
	return (len);
}

/*int	main(void)
{
	int	len;

	len = ft_put_u(4294967295);
	printf("\nThe lenght is: %d\n\n", len);

	len = ft_put_u(0);
	printf("\nThe lenght is: %d\n\n", len);

	len = ft_put_u(-2);
	printf("\nThe lenght is: %d\n\n", len);

	len = printf("%u", -2);
	printf ("\nThe lenght of original PRINTF is: %d", len);
}*/
