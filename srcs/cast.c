/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:53:31 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 12:53:43 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*convert_sint(t_format *fmt, va_list args)
{
	if (fmt->modifier == 1)
		return (ft_itoa((short)va_arg(args, int)));
	else if (fmt->modifier == 2)
		return (ft_itoa(va_arg(args, long)));
	else if (fmt->modifier == 3)
		return (ft_itoa(va_arg(args, intmax_t)));
	else if (fmt->modifier == 4)
		return (ft_itoa(va_arg(args, ssize_t)));
	else if (fmt->modifier == 5)
		return (ft_itoa((signed char)va_arg(args, int)));
	else if (fmt->modifier == 6)
		return (ft_itoa(va_arg(args, long long)));
	else
		return (ft_itoa(va_arg(args, int)));
}

char	*convert_unsint(t_format *fmt, va_list args, int base)
{
	if (fmt->modifier == 1)
		return (ft_itoa_base_uns(((unsigned short)
						va_arg(args, unsigned int)), base));
	else if (fmt->modifier == 2)
		return (ft_itoa_base_uns((va_arg(args, unsigned long)), base));
	else if (fmt->modifier == 3)
		return (ft_itoa_base_uns((va_arg(args, uintmax_t)), base));
	else if (fmt->modifier == 4)
		return (ft_itoa_base_uns((va_arg(args, size_t)), base));
	else if (fmt->modifier == 5)
		return (ft_itoa_base_uns(((unsigned char)
						va_arg(args, unsigned int)), base));
	else if (fmt->modifier == 6)
		return (ft_itoa_base_uns((va_arg(args, unsigned long long)), base));
	else
		return (ft_itoa_base_uns((va_arg(args, unsigned int)), base));
}
