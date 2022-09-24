/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:46:35 by preina-g          #+#    #+#             */
/*   Updated: 2022/09/22 10:42:01 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t num)
{
	size_t		i;
	char		*t;
	const char	*f;

	f = (char *)from;
	t = (char *)to;
	i = 0;
	while (i < num)
	{
		t[i] = f[i];
		i++;
	}
	return (t);
}
