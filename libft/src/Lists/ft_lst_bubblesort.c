/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_bubblesort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 11:22:36 by pimichau          #+#    #+#             */
/*   Updated: 2019/03/02 02:50:11 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lst_bubblesort(t_list *lst, int (*cmp)(void *, void *))
{
	if (!lst)
		return (NULL);
	if (lst->next && cmp(lst->content, lst->next->content) <= 0)
		lst = ft_lstswap(lst, lst->next);
	lst->next = ft_lst_bubblesort(lst->next, cmp);
	if (lst->next && cmp(lst->content, lst->next->content) <= 0)
		lst = ft_lstswap(lst, lst->next);
	lst->next = ft_lst_bubblesort(lst->next, cmp);
	return (lst);
}
