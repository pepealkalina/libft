/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:35:17 by preina-g          #+#    #+#             */
/*   Updated: 2022/09/29 11:18:59 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] != '\0' && i < (dstsize - 1))
		dst[i++] = *src++;
	dst[i] = '\0';
	return (slen + dlen);
}
