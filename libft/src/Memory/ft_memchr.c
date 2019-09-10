/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:47:40 by pimichau          #+#    #+#             */
/*   Updated: 2019/03/01 22:52:18 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = -1;
	str = (const char *)s;
	while (++i < n)
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((unsigned char *)str + i);
	return (NULL);
}
