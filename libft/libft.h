/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argirin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:29:35 by argirin           #+#    #+#             */
/*   Updated: 2016/12/02 18:11:27 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** Fonctions Supp
*/
void				ft_swap(int *a, int *b);
void				ft_first_word(char *str);
void				ft_hidenp(char *s1, char *s2);
int					ft_count_digit(long int nbr);
char				*ft_strrev(char *str);

/*
** Memory
*/

void				ft_memdel(void **ap);
void				ft_bzero(void *str, size_t len);
void				*ft_memset(void *str, int c, size_t len);
void				*ft_memchr(const void *buffer, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

/*
** Linked List
*/

void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem));
void				ft_lstiter(t_list *lst, void (*f) (t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del) (void *, size_t));

/*
** Malloc
*/

void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
char				*ft_strdup(const char *src);
char				*ft_realloc(int size, char *buffer);
char				*ft_strmap(char const *s, char (*f) (char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));

/*
** Strings
*/

void				ft_strclr(char *s);
char				*ft_strtrim(char const *s);
char				*ft_strchr(const char *str, int n);
char				*ft_strrchr(const char *str, int n);
char				**ft_strsplit(char const *s, char c);
void				ft_striter(char *s, void (*f) (char *));
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strcat(char *dest, const char *src);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strstr(const char *str, const char *to_find);
void				ft_lstiter(t_list *lst, void (*f) (t_list *elem));
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
char				*ft_strnstr(const char *str, const char *to_find, size_t n);

/*
** Usuals
*/

int					ft_islower(int c);
int					ft_isalpha(int n);
int					ft_isdigit(int n);
int					ft_isalnum(int n);
int					ft_isascii(int n);
int					ft_isprint(int n);
int					ft_toupper(int n);
int					ft_tolower(int n);
void				ft_putnbr(int nb);
void				ft_putchar(char c);
int					ft_isupper(int nb);
void				ft_putendl(char const *s);
size_t				ft_strlen(const char *str);
void				ft_putstr(char const *str);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
int					ft_strcmp(const char *s1, const char *s2);

/*
** Other
*/

char				*ft_itoa(int n);
int					ft_atoi(const char *str);
char				*ft_itoa_base(long long n, int base);

#endif
