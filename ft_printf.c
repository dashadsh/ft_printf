/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:36:51 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/12 16:02:09 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_formatter(args, format[])
// if (format)

int ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int	counter;

	i = -1;
	counter = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] != '%') //if the current char is %
				counter += ft_putchar(format[i]);
				//write(1, &str[index], 1);
				//count++;
		else if(format[i] == '%') //if the current char isnt % print what you read
				counter += ft_formatter(args, format[i+1]);
	}
	va_end(args);
	return(counter);
}