/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:14:41 by pimichau          #+#    #+#             */
/*   Updated: 2019/03/01 22:52:48 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_bzero(str, len + 1);
	ft_strncpy(str, s + start, len);
	return (str);
}
