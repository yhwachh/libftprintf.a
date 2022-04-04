/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:39:54 by ibalbako          #+#    #+#             */
/*   Updated: 2022/04/04 14:43:03 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *format, ...);
int		ft_find_format(va_list ap, const char format);
int		ft_print_caracter(int c);
int		ft_print_percent(void);
size_t	ft_strlen(const char *str);
int		ft_print_caracter(int c);
void	ft_putstr_fd(char *s, int fd);
int		ft_print_str(char *s);
int		ft_print_hexadecimal(unsigned long long p);
size_t	ft_intlen(long int n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
int		ft_print_decimal(int n);
int		ft_print_nbr_hexa(unsigned int num, const char format);
void	ft_put_hexa(unsigned int num, const char format);
int		ft_hexa_len(unsigned	int num);
int		ft_num_len(unsigned	int num);
char	*ft_nitoa(unsigned int n);
int		ft_print_unsigned_decimal(unsigned int n);
int		ft_ptr_len(unsigned long num);
void	ft_put_ptr(unsigned long num);
int		ft_print_hexadecimal(unsigned long long ptr);

#endif
