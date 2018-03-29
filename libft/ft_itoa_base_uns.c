/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_uns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:10:28 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 13:10:30 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base_uns(uintmax_t nbr, int base)
{
	char		*s;
	int			len;
	uintmax_t	nb;

	if (base < 2 || base > 16)
		return (NULL);
	nb = nbr;
	len = 1;
	while ((nbr /= base) != 0)
		len++;
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	if (!nb)
		s[--len] = '0';
	while (nb != 0)
	{
		s[--len] = HEXA[nb % base];
		nb /= base;
	}
	return (s);
}
