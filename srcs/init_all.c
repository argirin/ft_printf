/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_shit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:07:09 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/07 17:31:13 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_init_flags(t_format *fmt)
{
	fmt->flags.blank = 0;
	fmt->flags.minus = 0;
	fmt->flags.plus = 0;
	fmt->flags.diez = 0;
	fmt->flags.zero = 0;
}
