/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:57:48 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 12:57:52 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		aff_blank(t_format *fmt)
{
	int	len;

	len = 0;
	while (fmt->width > 0)
	{
		if (fmt->flags.zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		fmt->width--;
		len++;
	}
	return (len);
}

int		aff_hexa(t_format *fmt)
{
	if (fmt->type == 'x')
		ft_putstr("0x");
	if (fmt->type == 'X')
		ft_putstr("0X");
	return (2);
}

int		aff_zero(t_format *fmt)
{
	int count;

	count = 0;
	while (fmt->precision > 0)
	{
		ft_putchar('0');
		fmt->precision--;
		count++;
	}
	return (count);
}

int		putstr_preci(char *str, t_format *fmt)
{
	int i;

	i = 0;
	if (fmt->precision != -1 && str[i])
	{
		while (fmt->precision > 0)
		{
			ft_putchar(str[i]);
			fmt->precision--;
			i++;
		}
	}
	else
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}

int		putstr_wsign(char *str, t_format *fmt)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (fmt->type == 'X' && (str[i] >= 97 && str[i] < 122))
			str[i] -= 32;
		if (str[i] == '+' || str[i] == '-')
			i++;
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
