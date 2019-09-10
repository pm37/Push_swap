/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimichau <pimichau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 22:24:36 by pimichau          #+#    #+#             */
/*   Updated: 2019/03/01 22:38:17 by pimichau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BINARY_H
# define BINARY_H

void			print_bits(unsigned char octet);
unsigned char	swap_bits(unsigned char c);
char			*get_bits(void *octet, int size);

#endif
