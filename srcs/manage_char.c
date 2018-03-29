/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:54:56 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 12:54:59 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	my_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int			apply_flag_c(t_format *fmt, va_list args)
{
	char	c;
	int		len;
	int		ret_val;

	ret_val = 0;
	c = (char)va_arg(args, int);
	len = ft_strlen(&c);
	if (fmt->flags.minus == 1 && fmt->flags.zero == 1)
		fmt->flags.zero = 0;
	fmt->width--;
	ret_val += (fmt->flags.minus == 0) ? (aff_blank(fmt) + my_putchar(c)) :
										(my_putchar(c) + aff_blank(fmt));
	return (ret_val);
}
