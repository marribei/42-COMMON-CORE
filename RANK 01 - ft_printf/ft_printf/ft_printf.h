/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:44:15 by marribei          #+#    #+#             */
/*   Updated: 2024/11/15 20:18:01 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_put_c(char c);
int		ft_put_s(char *s);
int		ft_put_di(int n);
int		ft_put_p(void *ptr);
int		ft_put_u(unsigned int n);
int		ft_put_x(unsigned int n, const char format);
int		ft_base16(unsigned long n, char *hexa);

#endif
