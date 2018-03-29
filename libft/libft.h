/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:47:43 by argirin           #+#    #+#             */
/*   Updated: 2017/01/09 13:33:40 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef HEXA
#  define HEXA "0123456789abcdef"
# endif

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/*
** Malloc
*/
void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
/*
** Strings
*/
int					ft_strncmp(const char *s1, const char *s2, size_t n);
/*
** Usuals
*/
void				ft_putchar(char c);
size_t				ft_strlen(const char *str);
void				ft_putstr(char const *str);
void				ft_putwchar(wchar_t str);
int					ft_putnwstr(const wchar_t *str, int len);
int					ft_wstrlen(wchar_t *str);
int					ft_calc_wstrlen(wchar_t *str, int precision, int i);
/*
** Other
*/
char				*ft_itoa(ssize_t n);
int					ft_atoi(const char *str);
char				*ft_itoa_base_signed(ssize_t nb, int base);
char				*ft_itoa_base_uns(uintmax_t nbr, int base);

#endif
