/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:23:43 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/08/19 15:54:52 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

size_t	ft_strlen(const char *s);

int		ft_write_char(char c);
int		ft_write_str(char *str);
int		ft_write_int(int n);
int		ft_write_unsigned_int(unsigned int n);
int		ft_write_ptr(unsigned long int n);
int		ft_write_hex(unsigned int n);
int		ft_write_hex_upper(unsigned int n);

int		format(va_list *ap, char c);

int		ft_printf(const char *s, ...);
#endif