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



const char  *ft_write_text(int *len, const char *format)
{
    char *str;

    
}


int     ft_printf(const char *format, ...)
{
    int     len;
    int     i; 
    va_list arg;

    len = 0;
    va_start(arg,format);
    while(*format)
    {
        if(!format)
        {
            write(1,"(null)",6);
            va_end(arg);
            return(len);
        }
        if (*format == '%')
        {
            format = ft_find_arg(arg, format + 1, &len);
        }
        else
        {
           format = ft_write_text(&len, format);
        }
    }
    va_end(arg);
    return(len);
}

int main()
{
    int len = ft_printf("qwerty %s\n", "ok");
    int len2 = printf("qwerty %s\n", "ok");


    printf("qwerty %d\n", len);
    printf("qwerty %d\n", len2);
}