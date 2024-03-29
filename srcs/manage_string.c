/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:56:29 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 12:56:31 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			apply_flag_s(t_format *fmt, va_list args)
{
	int		len;
	char	*str;
	int		ret_val;

	ret_val = 0;
	str = va_arg(args, char*);
	if (fmt->flags.minus == 1 && fmt->flags.zero == 1)
		fmt->flags.zero = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (fmt->precision != -1 && fmt->precision >= len)
		fmt->precision = len;
	if (fmt->width != 0 && fmt->precision == -1 && fmt->width <= len)
		fmt->width = 0;
	if (fmt->width != 0 && fmt->precision == -1 && fmt->width > len)
		fmt->width -= len;
	if (fmt->width != 0 && fmt->precision != -1 && *str)
		fmt->width -= fmt->precision;
	ret_val += (fmt->flags.minus == 0) ?
			aff_blank(fmt) + putstr_preci(str, fmt) :
			putstr_preci(str, fmt) + aff_blank(fmt);
	return (ret_val);
}
