/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:18:49 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/08/22 14:43:25 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes int value, returns the length */

int	ft_write_nbr(int n)
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
		length += ft_write_nbr(long_n / 10);
	long_n = long_n % 10 + '0';
	length += write(1, &long_n, 1);
	return (length);
}
