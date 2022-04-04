/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:21:05 by ibalbako          #+#    #+#             */
/*   Updated: 2022/04/04 11:00:37 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_find_format(va_list ap, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_caracter(va_arg(ap, int));
	else if (format == 's')
		len = len + ft_print_str(va_arg(ap, char *));
	else if (format == 'p')
		len = len + ft_print_hexadecimal(va_arg(ap, unsigned long long));
	else if (format == 'd' || format == 'i')
		len = len + ft_print_decimal(va_arg(ap, int));
	else if (format == 'u')
		len = len + ft_print_unsigned_decimal(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		len = len + ft_print_nbr_hexa(va_arg(ap, unsigned int), format);
	else if (format == '%')
		len = len + ft_print_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = len + ft_find_format(ap, format[i + 1]);
			i++;
		}
		else
			len = len + ft_print_caracter(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
