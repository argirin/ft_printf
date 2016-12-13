/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 12:00:26 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/01 14:28:54 by gavizet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

Une conversion entière correspond à d, i, o, u, x ou X

int		len_h()
{
	La conversion entière suivante correspond à un short int ou
	unsigned short int, ou la conversion n suivante correspond à un argument
	pointeur sur un short int.
}

int		len_hh()
{
	La conversion entière suivante correspond à un signed char ou unsigned
	char, ou la conversion n suivante correspond à un argument pointeur sur un
	signed char.
}

int		len_l()
{
	La conversion entière suivante correspond à un long int ou unsigned long
	int, ou la conversion n suivante correspond à un pointeur sur un long int,
	ou la conversion c suivante correspond à un argument wint_t,
	ou encore la conversion s suivante correspond à un pointeur sur un wchar_t.
}

int		len_ll()
{
	La conversion entière suivante correspond à un long long int,
	ou unsigned long long int, ou la conversion n suivante correspond
	à un pointeur sur un long long int.
}

int		len_j()
{
	La conversion entière suivante correspond à un argument intmax_t ou uintmax_t.
}

int		len_z()
{
	La conversion entière suivante correspond à un argument size_t ou ssize_t.
}
