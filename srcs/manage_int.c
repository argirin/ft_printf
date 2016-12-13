/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:07:46 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/13 20:22:18 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putoutsigne(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		ft_putchar(str[i]);
		i++;
	}
}

int		flag_int_next_3(t_format *fmt, int diff, int len, char *modifier)
{
	int ret;
	int len2;

	ret = 0;
	ft_putoutsigne(modifier);
	if (fmt->flags.minus == 1)
	{
		while (fmt->width > 0)
		{
			ft_putchar(' ');
			fmt->width--;
			ret++;
		}
	}
	return (ret);
}

int		flag_int_next_2(t_format *fmt, int len, char *modifier)
{
	int ret;

	ret = 0;
	if (fmt->flags.minus == 0)
	{
		while (fmt->width > 0)
		{
			if (fmt->flags.zero == 1 && fmt->precision == -1)
				ft_putchar('0');
			else
				ft_putchar(' ');
			fmt->width--;
		}
	}
	if (modifier[0] == '-')
		ft_putchar('-');
	if (fmt->flags.plus == 1 && modifier[0] != '-')
		ft_putchar('+');
	else if (fmt->flags.blank == 1 && modifier[0] != '-' && fmt->flags.plus == 0)
		ft_putchar(' ');
	while (fmt->precision > 0)
	{
		ft_putchar('0');
		fmt->precision--;
	}
	return (ret);
}

int		flag_int_next(t_format *fmt, int len, char *modifier)
{
	int ret;

	ret = 0;
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
	if (fmt->flags.plus == 1 || modifier[0] == '-')
		fmt->width--;
	return (ret);
}

int		apply_flag_int(t_format *fmt, va_list args)
{
	int len;
	int diff;
	char *modifier;
	int ret;

	modifier = ft_modifier_int(fmt, args);
	len = modifier[0] != '-' ? ft_strlen(modifier) : ft_strlen(modifier) - 1;
	ret = ft_strlen(modifier);
	ret += flag_int_next(fmt, len, modifier);
	ret += flag_int_next_2(fmt, len, modifier);
	ret += flag_int_next_3(fmt, diff, len,  modifier);
	ft_strdel(&modifier);
	return (ret);
}
