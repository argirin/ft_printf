/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:12:04 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 13:12:06 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	if (!(tab = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (size)
	{
		tab[size] = '\0';
		size--;
	}
	tab[size] = '\0';
	return (tab);
}
