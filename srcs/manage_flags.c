/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:03:42 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/12 14:26:33 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_modifier_int(t_format *fmt, va_list args)
{
	if (fmt->modifier == 1)
		return (ft_itoa((short)va_arg(args, int)));
	else if (fmt->modifier == 2)
		return (ft_itoa((long)va_arg(args, long)));
	else if (fmt->modifier == 3)
		return (ft_itoa((intmax_t)va_arg(args, intmax_t)));
	else if (fmt->modifier == 4)
		return (ft_itoa((ssize_t)va_arg(args, ssize_t)));
	else if (fmt->modifier == 5)
		return (ft_itoa((signed char)va_arg(args, int)));
	else if (fmt->modifier == 6)
		return (ft_itoa(va_arg(args, long long)));
	else
		return (ft_itoa(va_arg(args, int)));
}

char	*ft_modifier_octal(t_format *fmt, va_list args)
{
	if (fmt->modifier == 1)
		return (ft_itoa((unsigned short)va_arg(args,unsigned int)));
	else if (fmt->modifier == 2)
		return (ft_itoa(va_arg(args, unsigned long)));
	else if (fmt->modifier == 3)
		return (ft_itoa(va_arg(args, uintmax_t)));
	else if (fmt->modifier == 4)
		return (ft_itoa(va_arg(args, size_t)));
	else if (fmt->modifier == 5)
		return (ft_itoa((unsigned char)va_arg(args, unsigned int)));
	else if (fmt->modifier == 6)
		return (ft_itoa_base((va_arg(args, unsigned long long)), 8));
	else
		return (NULL);
}
