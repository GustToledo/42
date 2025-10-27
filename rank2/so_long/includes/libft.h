/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:55:03 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/27 17:55:57 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

bool	is_spaces(char c);

/* is */
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/* str */
size_t	ft_strlen(const char*str);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* to */
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/* mem */
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int n, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

/* fd */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* extras */
void	free_matrix(char **matrix);
ssize_t	ft_atol(const char *str);
void	ft_lstadd_back(t_list **head, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
bool	is_all_digits(char *str);
bool	is_onstr(const char *str, int ch);
char	*join_free_both(char *s1, char *s2);
char	*join_free(char *s1, char *s2);
char	*join_freev2(char *s1, char *s2);
size_t	matrix_len(char **matrix);
bool	only_spaces(const char *str);
int		prt_hexa(unsigned int nbr, bool upper_case);
int		prt_int(int n);
int		prt_ptr(void *ptr_addr);
int		prt_str(char const *str);
int		prt_unsigned(unsigned int nbr);
bool	streq(char *str1, char *str2);
char	*trim_free(char *s1, char const *set);

/* ft_printf */
int		p_char(int c);
int		p_digit(unsigned long long nbr, int base, char type);
int		p_format(char type, va_list ap);
int		ft_printf(const char *str, ...);

/* get_next_line */
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_substr_fix(const char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*read_and_stash(int fd, char *stash);
char	*extract_line(char *stash);
char	*clean_stash(char *stash);

#endif