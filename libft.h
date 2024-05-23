/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:45:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/23 13:42:15 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <string.h>

int		ft_isalnum(int i);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
int		ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *str);
void	ft_bzero(void *s, int n);
void	*ft_memset(void *pointer, int value, int count);
void	*ft_memcpy(void *dst, const void *src, int size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *p1, const void *p2, int size);
void	*ft_memmove(void *dst, const void *src, size_t n);
void 	*ft_calloc(size_t nmemb, size_t size); // NO
void 	ft_putnbr_fd(int n, int fd);
void 	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
char 	*ft_substr(char const *s, unsigned int start, size_t len); // NO

#endif
