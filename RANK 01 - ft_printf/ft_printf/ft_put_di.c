/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:21:46 by marribei          #+#    #+#             */
/*   Updated: 2024/11/15 17:45:07 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_di(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		len++;
	}
	if (n > 9)
		len += ft_put_di(n / 10);
	len += ft_put_c('0' + (n % 10));
	return (len);
}

/*int	main(void)
{
	int	len;

	len = ft_put_di(-7238368);
	printf("\nThe lenght is: %d", len);
	return (0);
}*/
