/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:18:49 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:36:58 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes int value recursively, returns the length */
int	format_d_i(int n)
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
		length += format_d_i(long_n / 10);
	long_n = long_n % 10 + '0';
	length += write(1, &long_n, 1);
	return (length);
}
