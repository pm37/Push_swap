/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:21:29 by pimichau          #+#    #+#             */
/*   Updated: 2019/05/17 18:45:58 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*my_lstcpy(t_list *source, int (*cpy)(void *, void *))
{
	t_list		*copy;
	t_list		*node;

	copy = NULL;
	while (source)
	{
		if (!(node = ft_lstnew(source->content, sizeof(int))))
			return (NULL);
		if (cpy)
			if (cpy(node->content, source->content))
				return (NULL);
		ft_lstprepend(&copy, node);
		source = source->next;
	}
	return (copy);
}

t_list			*my_lstncpy(t_list *source,
				int size, int (*cpy)(void *, void *))
{
	t_list		*copy;
	t_list		*node;

	copy = NULL;
	while (source && size--)
	{
		if (!(node = ft_lstnew(source->content, sizeof(int))))
			return (NULL);
		if (cpy)
			if (cpy(node->content, source->content))
				return (NULL);
		ft_lstprepend(&copy, node);
		source = source->next;
	}
	return (copy);
}
