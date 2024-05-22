/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:45:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/22 13:10:53 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
// test library => to delete
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
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, unsigned int len); //// NO
int		ft_atoi(const char *str); //// NO
int		ft_strlcpy(char *dst, const char *src, unsigned int size);
int		ft_strlcat(char *dst, const char *src, unsigned int size);
char	*ft_strdup(const char *str);
void	ft_bzero(void *s, int n);
void	*ft_memset(void *pointer, int value, int count);
void	*ft_memcpy(void *dst, const void *src, int size);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *p1, const void *p2, int size);
void	*ft_memmove(void *dst, const void *src, unsigned int n); // NO

#endif
