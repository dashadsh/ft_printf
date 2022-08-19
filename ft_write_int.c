/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:18:49 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/08/19 15:52:07 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes int value, returns the length */
int	ft_write_int(int n)
{
	long			long_n;
	int				length;

	long_n = (long)n;
	length = 0;
	if (long_n < 0)
	{
		length += write(1, "-", 1);
		long_n = -long_n;
	}
	if (long_n / 10)
		length += ft_write_int(long_n / 10);
	long_n = long_n % 10 + '0';
	length += write(1, &long_n, 1);
	return (length);
}
