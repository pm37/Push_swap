/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2display19/display5/13 15:13:41 by pimichau          #+#    #+#             */
/*   Updated: 2019/07/03 23:32:52 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			exec(t_stack *a, t_stack *b, int display, char *line)
{
	if (ft_strequ(line, "sa") || ft_strequ(line, "sb"))
		ft_strequ(line, "sa") ? swap(a, display) : swap(b, display);
	else if (ft_strequ(line, "ss"))
		sswap(a, b, display);
	else if (ft_strequ(line, "ra") || ft_strequ(line, "rb"))
		ft_strequ(line, "ra") ? rotate(a, display) : rotate(b, display);
	else if (ft_strequ(line, "rr"))
		rrotate(a, b, display);
	else if (ft_strequ(line, "rra") || ft_strequ(line, "rrb"))
		ft_strequ(line, "rra") ? reverse_rotate(a, display) : reverse_rotate(b, display);
	else if (ft_strequ(line, "rrr"))
		rreverse_rotate(a, b, display);
	else if (ft_strequ(line, "pa") || ft_strequ(line, "pb"))
		ft_strequ(line, "pa") ? push(b, a, display) : push(a, b, display);
	else
		return (-1);
	if (display || isatty(0))
		print_stacks(a->head, b->head);
	return (0);
}
