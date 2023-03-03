/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:00:01 by ddiniz            #+#    #+#             */
/*   Updated: 2023/02/01 08:49:39 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

//<ctype.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
//<string.h>
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char s1, const char s2);
char	*ft_strnstr(const char *dst, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//<stdlib.h>
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nelem, size_t elsize);
//LEGACY
void	ft_bzero(void *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Linked List
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *list_src);
int		ft_lstsize(t_list *list_src);

void	ft_lstadd_front(t_list **list_src, t_list *new);
void	ft_lstadd_back(t_list **list_src, t_list *new);
void	ft_lstclear(t_list **list_src, void (*del)(void *));
void	ft_lstdelone(t_list *list_src, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *));
void	ft_lstiter(t_list *list_src, void (*func)(void *));
#endif