/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:17:02 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:44:52 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* writes ptr adress, returns the length */
int	format_p(unsigned long int n)
{
	int	digit;
	int	length;

	digit = 0;
	length = 0;
	if (n / 16)
		length += format_p(n / 16);
	if (length == 0)
		length += write(1, "0x", 2);
	digit = n % 16;
	length += write(1, &"0123456789abcdef"[digit], 1);
	return (length);
}
