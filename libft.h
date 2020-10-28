/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 11:33:16 by fsacquin          #+#    #+#             */
/*   Updated: 2020/10/18 18:32:50 by fsacquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *s, int c, size_t length);
void				ft_bzero(void *s, size_t length);
void				*ft_memcpy(void *dest, const void *src, size_t length);
void				*ft_memccpy(void *dest, const void *src,
int c, size_t length);
void				*ft_memmove(void *dest, const void *src, size_t length);
void				*ft_memchr(const void *src, int c, size_t length);
int					ft_memcmp(const void *str1, const void *str2,
size_t length);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *str);
char				*ft_strchr(const char *str, int c);
int					ft_strncmp(const char *str1, const char *str2,
size_t length);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t length);
char				*ft_strnstr(const char *str, const char *to_find,
size_t length);
int					ft_atoi(const char *str);
void				*ft_calloc(unsigned int num_units, unsigned int size_units);
char				*ft_strdup(const char *str);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *str1, const char *str2);
char				*ft_strtrim(const char *s1, const char *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));

#endif
