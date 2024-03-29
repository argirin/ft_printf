/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_wstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:57:16 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 12:57:19 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	print_flag_wstr(t_format *fmt, wchar_t *str, int len)
{
	int		ret_val;

	ret_val = 0;
	if (fmt->flags.minus == 0)
		ret_val += aff_blank(fmt);
	ret_val += ft_putnwstr(str, len);
	if (fmt->flags.minus == 1)
		ret_val += aff_blank(fmt);
	return (ret_val);
}

int			apply_flag_wstr(t_format *fmt, va_list args)
{
	int		len;
	int		ret_val;
	wchar_t	*str;

	ret_val = 0;
	str = va_arg(args, wchar_t*);
	if (fmt->flags.minus == 1 && fmt->flags.zero == 1)
		fmt->flags.zero = 0;
	if (str == NULL)
		str = L"(null)";
	len = (fmt->precision != -1) ? ft_calc_wstrlen(str, fmt->precision, 0) :
		ft_wstrlen(str);
	if (fmt->width != 0 && fmt->precision == -1 && fmt->width <= len)
		fmt->width = 0;
	if (fmt->width != 0 && fmt->precision == -1 && fmt->width > len)
		fmt->width -= len;
	if (fmt->width != 0 && fmt->precision != -1)
		fmt->width -= len;
	if (fmt->precision != -1 && fmt->precision >= len)
		fmt->precision = len;
	return (print_flag_wstr(fmt, str, len));
}
