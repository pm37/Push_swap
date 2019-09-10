/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 19:10:52 by pimichau          #+#    #+#             */
/*   Updated: 2019/05/17 20:05:26 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstncpy(t_list *source,
				int size, int (*cpy)(void *, void *))
{
	t_list		*copy;
	t_list		*node;

	copy = NULL;
	while (source && size--)
	{
		if (!(node = ft_lstnew(source->content, sizeof(source->content))))
			return (NULL);
		if (cpy)
			if (cpy(node->content, source->content))
				return (NULL);
		ft_lstprepend(&copy, node);
		source = source->next;
	}
	return (copy);
}
