/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavizet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 10:04:16 by gavizet           #+#    #+#             */
/*   Updated: 2016/12/13 20:44:01 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "../libft/libft.h"

# define HEXA "0123456789ABCDEF"
# define M_H 1
# define M_HH 5
# define M_L 2
# define M_LL 6
# define M_J 3
# define M_Z 4

typedef	struct		s_flags
{
	int				blank;
	int				minus;
	int				plus;
	int				diez;
	int				zero;
}					t_flags;

typedef	struct		s_format
{
	t_flags			flags;
	int				width;
	int				precision;
	int				modifier;
	char			type;
}					t_format;

int					ft_printf(const char *format, ...);
int					manage_string(const char *format);

void				ft_init_flags(t_format *fmt);
int				ft_proto(char **addr_str, va_list args);
int				ft_proto2(t_format *fmt, va_list args);
void				ft_flag(char **addr_str, t_format *addr_format);
void				ft_width(char **addr_str, t_format *addr_format);
void				ft_precision(char **addr_str, t_format *addr_format);
char				*ft_modifier_int(t_format *fmt, va_list args);
void				ft_modifier(char **addr_str, t_format *addr_format);
int				apply_flag_int(t_format *fmt, va_list args);

int					count_len_dec(long long nb);
void				aff_nb(int nbr);

int					ft_is_type(char c);
int					ft_is_flags(char c);
void				ft_show_inside(t_format fmt);

#endif
