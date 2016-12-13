/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:06:49 by argirin           #+#    #+#             */
/*   Updated: 2016/12/13 20:12:44 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_show_inside(t_format fmt)
{
	printf("BLANK:\t\t%d\n", fmt.flags.blank);
	  printf("MINUS:\t\t%d\n", fmt.flags.minus);
	  printf("PLUS:\t\t%d\n", fmt.flags.plus);
	  printf("DIEZ:\t\t%d\n", fmt.flags.diez);
	  printf("ZERO:\t\t%d\n", fmt.flags.zero);
	  printf("WIDTH:\t\t%d\n", fmt.width);
	  printf("PRECISION:\t\t%d\n", fmt.precision);
	  printf("MODIFIER:\t\t%d\n", fmt.modifier);
	  printf("TYPE:\t\t%c\n", fmt.type);
}

int			ft_vfprintf(const char *format, va_list args)
{
	int		ret;

	ret = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%');
			ret = ft_proto((char**)&format, args);
			//ft_show_inside(fmt);
			//fmt.flags.blank;
			/*if (*format == 'D')
			  ret += ;
			  if (*format == 'i')
			  ret += manage_x;
			  if (*format == 'p')
			  ret += manage_x;
			  if (*format == 'O')
			  ret += manage_x;
			  if (*format == 'u')
			  ret += manage_x;
			  if (*format == 'U')
			  ret += manage_x;
			  if (*format == 'S')
			  ret += manage_x;
			  if (*format == 'X')
			  ret += manage_x;
			  if (*format == 'c')
			  ret += manage_x;
			  if (*format == 'C')
			  ret += manage_x;
			  else
			//return (-1);*/
		}
		else
		{
			ft_putchar(*format);
			ret++;
		}
		format++;
	}
	return (ret);
}

int			ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret_val;

	va_start(args, format);
	ret_val = ft_vfprintf(format, args);
	va_end(args);
	return (ret_val);
}

int		ft_proto2(t_format *fmt, va_list args)
{
	int ret;
	
	if (fmt->type == 'd' || fmt->type == 'i')
		ret = apply_flag_int(fmt, args);
	return (ret);
}
