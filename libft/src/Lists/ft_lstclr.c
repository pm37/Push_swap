/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:29:41 by pimichau          #+#    #+#             */
/*   Updated: 2018/11/20 15:46:26 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstclr(t_list *alst)
{
	t_list *elem;

	while (alst->next)
	{
		elem = alst->next;
		free(alst);
		alst = elem;
	}
	return (NULL);
}
