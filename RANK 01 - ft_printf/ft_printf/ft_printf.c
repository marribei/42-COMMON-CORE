/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:59:14 by marribei          #+#    #+#             */
/*   Updated: 2024/11/16 19:58:14 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args(va_list args, const char format)
{
	if (format == 'c')
		return (ft_put_c(va_arg(args, int)));
	if (format == 's')
		return (ft_put_s(va_arg(args, char *)));
	if (format == 'p')
		return (ft_put_p(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_put_di(va_arg(args, int)));
	if (format == 'u')
		return (ft_put_u(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_put_x(va_arg(args, unsigned int), format));
	if (format == '%')
		return (write(1, "%", 1));
	ft_put_c('%');
	ft_put_c(format);
	return (2);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start (args, s);
	i = 0;
	len = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			len += ft_printf_args(args, s[i]);
		}
		else
			len += ft_put_c(s[i]);
		i++;
	}
	va_end (args);
	return (len);
}

/*int main(void)
{
    char    *s = "\nChar: %c \nString: %s \nPointer %p \n"
        "Digit: %d \nInteger: %i \nUnsigned int: %u \n"
        "x: %x \nX: %X \nPercent: %% %k%";
    char    *null_s = NULL;
    int     len;

    ft_printf("MY PRINTF:"); 
    len = ft_printf(s, 'Z', null_s, null_s, -214, 21474, -2, 15247, 33868);
    ft_printf("\nThe length is: %d\n", len);

    printf("\nORIGINAL PRINTF:");
    len = printf(s, 'Z', null_s, null_s, -214, 21474, -2, 15247, 33868);
    printf("\nThe length is: %d\n", len);

    ft_printf("\nMY PRINTF WITH NULL STR:");
    len = ft_printf(null_s, 'Z');
    ft_printf("\nThe length is: %d\n", len);

    printf("\nORIGINAL PRINTF WITH NULL STR:");
    len = printf(null_s, 'Z');
    printf("\nThe length is: %d\n", len);
}*/
