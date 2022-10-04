/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:09:42 by preina-g          #+#    #+#             */
/*   Updated: 2022/10/04 10:24:14 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst)
		return ;
	while ((*lst))
	{
		ft_lstdelone((*lst), del);
		(*lst) = (*lst)->next;
	}
	free((*lst));
}
