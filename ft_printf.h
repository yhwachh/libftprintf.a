#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int	ft_print_caracter(int c);
int	ft_print_percent(void);
size_t	ft_strlen(const char *str);
int	ft_print_caracter(int c);
void	ft_putstr_fd(char *s, int fd);
int	ft_print_str(char *s);
int	ft_print_hexadecimal(unsigned long long p);
size_t	ft_intlen(long int n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
int	ft_print_decimal(int n);
int	ft_print_nbr_hexa(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int	ft_hex_len(unsigned	int num);
int	ft_num_len(unsigned	int num);
char	*ft_uitoa(unsigned int n);
int	ft_print_unsigned_decimal(unsigned int n);
int	ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int	ft_print_hexadecimal(unsigned long long ptr);

#endif
