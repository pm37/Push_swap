/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:58:35 by pimichau          #+#    #+#             */
/*   Updated: 2019/05/09 15:10:56 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **src, t_list **dest)
{
	t_list	*node;

	if (*src)
	{
		node = *dest;
		*dest = *src;
		*src = (*src)->next;
		(*dest)->next = node;
	}
}
