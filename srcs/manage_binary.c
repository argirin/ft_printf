/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:54:41 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 12:54:43 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	print_flag_b(t_format *fmt, char *str)
{
	int	ret_val;

	ret_val = 0;
	ret_val += (fmt->flags.minus == 0) ?
			(aff_blank(fmt) + aff_zero(fmt) + putstr_wsign(str, fmt)) :
			(aff_zero(fmt) + putstr_wsign(str, fmt) + aff_blank(fmt));
	ft_strdel(&str);
	return (ret_val);
}

int			apply_flag_b(t_format *fmt, va_list args)
{
	int		len;
	char	*str;

	str = convert_unsint(fmt, args, 2);
	len = ft_strlen(str);
	if (fmt->precision == 0 && str[0] == '0')
		return (0);
	if ((fmt->precision != -1 || fmt->flags.minus == 1) && fmt->flags.zero == 1)
		fmt->flags.zero = 0;
	if (fmt->width != 0 && fmt->width <= len)
		fmt->width = 0;
	if (fmt->width != 0 && fmt->precision == -1 && fmt->width > len)
		fmt->width -= len;
	if (fmt->width != 0 && fmt->precision != -1 && fmt->width > len)
		fmt->width -= fmt->precision;
	if (fmt->precision != -1 && fmt->precision <= len)
	{
		fmt->width -= (len - fmt->precision);
		fmt->precision = 0;
	}
	if (fmt->precision != -1 && fmt->precision > len)
		fmt->precision -= len;
	return (print_flag_b(fmt, str));
}
