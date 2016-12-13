/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:06:15 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/06 14:10:05 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

char	*manage_string(const char *format)
{
	int ret;
	char *cpy;
	int len;
	t_flags *flag;
	int i;

	flag = 0;
	len = 0;
	ret = 0;
	i = 0;
	/*if (flag->width > 0)
	{
		while (*format)
		{
			*cpy++ = *format;
			len++;
		}
		if (len >= flag->width)
			flag->width = 0;
		else
			flag->width = flag->width - len;
	}*/
	while (format[i])
		i++;
	i++;
	while (format[i])
		i = i + 1;
	while (len < i)
	{
		ft_print_char(format[len++]);
		//*format++;
		++ret;
	}
	return (ret);
}
