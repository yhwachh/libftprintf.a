/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:21:05 by ibalbako          #+#    #+#             */
/*   Updated: 2022/03/25 11:21:09 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>


int	ft_print_format(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_find_format(va_list ap,const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
	{
		len = len + ft_print_format(va_arg(ap,int));
	}

	return(len);
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
			len = len + ft_print_format(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

int	main(void)
{
	char c = 'd';
	ft_printf("yu gi %coh\n",c);
	printf("yu gi %coh\n",c);
}