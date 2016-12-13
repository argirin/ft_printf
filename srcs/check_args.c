/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:14:12 by argirin           #+#    #+#             */
/*   Updated: 2016/12/12 14:31:47 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag(char **addr_str, t_format *addr_format)
{
    //addr_format->flags.blank; //RECUPERER VIA LADRESSE//
    while (ft_is_flags(**addr_str))
    {
		if (**addr_str == ' ')
            addr_format->flags.blank = 1;
        else if (**addr_str == '+')
            addr_format->flags.plus = 1;
        else if (**addr_str == '-')
            addr_format->flags.minus = 1;
        else if (**addr_str == '#')
            addr_format->flags.diez = 1;
        else  if (**addr_str == '0')
            addr_format->flags.zero = 1;
        (*addr_str)++;
    }
    return ;
}

void	ft_precision(char **addr_str, t_format *addr_format)
{
    if (**addr_str == '.')
    {
        (*addr_str)++;
		if (**addr_str >= '0' && **addr_str <= '9')
			addr_format->precision = ft_atoi(*addr_str);
		else
			addr_format->precision = -1;
        while (**addr_str >= '0' && **addr_str <= '9')
		{
            (*addr_str)++;
			//addr_format->precision = ft_atoi(*addr_str);
		}
    }
    else
        addr_format->precision = -1;
}

void	ft_modifier(char **addr_str, t_format *addr_format)
{
    addr_format->modifier = 0;
    addr_format->modifier = (!ft_strncmp(*addr_str, "h", 1)) ?
    M_H : addr_format->modifier;
    addr_format->modifier = (!ft_strncmp(*addr_str, "hh", 2)) ?
    M_HH : addr_format->modifier;
    addr_format->modifier = (!ft_strncmp(*addr_str, "l", 1)) ?
    M_L : addr_format->modifier;
    addr_format->modifier = (!ft_strncmp(*addr_str, "ll", 2)) ?
    M_LL : addr_format->modifier;
    addr_format->modifier = (!ft_strncmp(*addr_str, "j", 1)) ?
    M_J : addr_format->modifier;
    addr_format->modifier = (!ft_strncmp(*addr_str, "z", 1)) ?
    M_Z : addr_format->modifier;
    if (addr_format->modifier >= M_HH)
        (*addr_str)+= 2;
    else if (addr_format->modifier > 0)
        (*addr_str)++;
}

void	ft_width(char **addr_str, t_format *addr_format)
{
    addr_format->width = ft_atoi(*addr_str);
    while (**addr_str >= '0' && **addr_str <= '9')
        (*addr_str)++;
}

int		ft_proto(char **addr_str, va_list args)
{
    t_format	fmt;
	int ret;

	ret = 0;
	ft_init_flags(&fmt);
	ft_flag(addr_str, &fmt);
    ft_width(addr_str, &fmt);
    ft_precision(addr_str, &fmt);
    ft_modifier(addr_str, &fmt);
    fmt.type = **addr_str;
	//ft_show_inside(fmt);
	ret = ft_proto2(&fmt, args);
	return (ret);
}
