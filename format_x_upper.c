/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:17:33 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:22:08 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes hex value recursively in uppercase, returns the length */
int	format_x_upper(unsigned int n)
{
	unsigned int	digit;
	int				length;

	digit = 0;
	length = 0;
	if (n / 16)
		length += format_x_upper(n / 16);
	digit = n % 16;
	length += write(1, &"0123456789ABCDEF"[digit], 1);
	return (length);
}
