/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:56:30 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:33:32 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* c s d i u p x X % */

int	format(va_list *ap, char c)
{
	int	sum;

	sum = 0;
	if (c == 'c')
		sum += format_c(va_arg(*ap, int));
	else if (c == 's')
		sum += format_s(va_arg(*ap, char *));
	else if ((c == 'd') || (c == 'i'))
		sum += format_d_i(va_arg(*ap, int));
	else if (c == 'u')
		sum += format_u(va_arg(*ap, unsigned int));
	else if (c == 'p')
		sum += format_p(va_arg(*ap, unsigned long int));
	else if (c == 'x')
		sum += format_x(va_arg(*ap, unsigned int));
	else if (c == 'X')
		sum += format_x_upper(va_arg(*ap, unsigned int));
	else if (c == '%')
		sum += write(1, "%", 1);
	return (sum);
}

int	ft_printf(const char *str, ...)
{
	int		sum;
	va_list	ap;

	sum = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			sum += format(&ap, *str);
		}
		else
			sum += format_c(*str);
		str++;
	}
	va_end(ap);
	return (sum);
}

/*
int main()
{
	ft_printf("hello, %s", "bitcccches");
}
*/