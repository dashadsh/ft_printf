/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:17:55 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:45:17 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes hex value in lowercase, returns the length */
int	format_x(unsigned int n)
{
	unsigned int	digit;
	int				length;

	digit = 0;
	length = 0;
	if (n / 16)
		length += format_x(n / 16);
	digit = n % 16;
	length += write(1, &"0123456789abcdef"[digit], 1);
	return (length);
}
