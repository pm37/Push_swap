/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:44:18 by pimichau          #+#    #+#             */
/*   Updated: 2019/03/01 23:33:25 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*reversal(t_list *previous, t_list *current, t_list *next)
{
	if (current == NULL)
		return (previous);
	next = current->next;
	current->next = previous;
	previous = current;
	return (reversal(previous, next, NULL));
}

void			ft_lstrev(t_list **alst)
{
	*alst = reversal(NULL, *alst, NULL);
}
