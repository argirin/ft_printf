/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 10:39:38 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/01 13:47:11 by gavizet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define HEXA "0123456789ABCDEF"

static int	ft_count_len_base(long long nb, int base)
{
	int		len;

	len = 0;
	if (!nb)
		return (1);
	while (nb != 0)
	{
		len++;
		nb /= base;
	}
	return (len);
}

char		*ft_itoa_base(long long nb, int base)
{
	char	*s;
	int		len;
	int		neg;

	if (base < 2 || base > 16)
		return (NULL);
	neg = (base == 10 && nb < 0) ? 1 : 0;
	len = ft_count_len_base(nb, base) + neg;
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	if (!nb)
		s[--len] = '0';
	while (nb != 0)
	{
		s[--len] = (nb > 0) ? HEXA[nb % base] : HEXA[(nb * -1) % base];
		nb /= base;
	}
	if (neg)
		s[--len] = '-';
	return (s);
}
