/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:25:09 by preina-g          #+#    #+#             */
/*   Updated: 2022/09/23 10:33:59 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*s;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		if (c == s[i])
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (0);
}
