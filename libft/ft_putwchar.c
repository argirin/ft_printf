/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:11:17 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 13:11:19 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putwchar(wchar_t str)
{
	if (str <= 0x7F)
		ft_putchar(str);
	else if (str <= 0x7FF)
	{
		ft_putchar((str >> 6) + 0xC0);
		ft_putchar((str & 0x3f) + 0x80);
	}
	else if (str <= 0xFFFF)
	{
		ft_putchar((str >> 12) + 0xE0);
		ft_putchar(((str >> 6) & 0x3F) + 0x80);
		ft_putchar((str & 0x3F) + 0x80);
	}
	else if (str <= 0x10FFFF)
	{
		ft_putchar((str >> 18) + 0xF0);
		ft_putchar(((str >> 12) & 0x3F) + 0x80);
		ft_putchar(((str >> 6) & 0x3F) + 0x80);
		ft_putchar((str & 0x3F) + 0x80);
	}
}
