/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:18:19 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:45:04 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes unsigned int value, returns the length */
int	format_u(unsigned int n)
{
	long		long_n;
	int			length;

	long_n = (long)n;
	length = 0;
	if (long_n / 10)
		length += format_u(long_n / 10);
	long_n = long_n % 10 + '0';
	length += write(1, &long_n, 1);
	return (length);
}
