/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_signed.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:10:17 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 13:10:19 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base_signed(ssize_t nbr, int base)
{
	char	*s;
	int		len;
	int		neg;
	ssize_t	nb;

	if (base < 2 || base > 16)
		return (NULL);
	nb = nbr;
	neg = (base == 10 && nb < 0) ? 1 : 0;
	len = neg;
	while ((nbr /= base) != 0)
		len++;
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	if (!nb)
		s[--len] = '0';
	while (nb != 0)
	{
		s[--len] = (nb > 0) ? HEXA[nb % base] : HEXA[(nb % base) * -1];
		nb /= base;
	}
	if (neg)
		s[--len] = '-';
	return (s);
}
