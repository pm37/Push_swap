/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:19:37 by pimichau          #+#    #+#             */
/*   Updated: 2019/05/20 13:39:58 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isinteger(char *str)
{
	char	*tmp;
	int		len;
	int		value;

	tmp = NULL;
	if (!ft_isnumeric(str))
		return (0);
	if (*str == '+')
		return (ft_isinteger(str + 1));
	len = ft_strlen(str);
	if (len > (*str == '-' ? 11 : 10))
		return (0);
	else if (len == (*str == '-' ? 11 : 10))
	{
		tmp = ft_strsub(str, *str == '-' ? 1 : 0, 9);
		if ((value = ft_atoi(tmp)) > 214748364)
			return (0);
		else if (value == 214748364)
			if (str[len - 1] - 48 > (*str == '-' ? 8 : 7))
				return (0);
	}
	if (tmp)
		ft_strdel(&tmp);
	return (1);
}
