/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:58:34 by preina-g          #+#    #+#             */
/*   Updated: 2022/09/23 11:02:58 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
int			ft_isalpha(int argument);
int			ft_isalnum(int argument);
int			ft_isascii(int argument);
int			ft_isprint(int argument);
int			ft_isdigit(int argument);
size_t		ft_strlen(const char *str);
int			ft_toupper(int chara);
int			ft_tolower(int chara);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memcpy(void *to, const void *from, size_t num);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);

#endif