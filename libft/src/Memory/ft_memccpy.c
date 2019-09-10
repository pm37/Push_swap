/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:50:59 by pimichau          #+#    #+#             */
/*   Updated: 2019/03/01 22:52:18 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	char				*s1;
	const char			*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (const char *)src;
	while (i < n)
	{
		s1[i] = (unsigned char)s2[i];
		if ((unsigned char)s2[i] == (unsigned char)c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
