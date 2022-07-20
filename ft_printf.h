/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:23:43 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/20 10:23:45 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>

size_t	ft_strlen(const char *s);

int		format_c(char c);
int		format_s(char *str);
int		format_d_i(int n);
int		format_u(unsigned int n);
int		format_p(unsigned long int n);
int		format_x(unsigned int n);
int		format_x_upper(unsigned int n);

int		format(va_list *ap, char c);

int		ft_printf(const char *s, ...);
#endif