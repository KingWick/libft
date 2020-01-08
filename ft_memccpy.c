/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:49:29 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:42:42 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	cmp;
	unsigned char	*dst;
	unsigned char	*source;

	if (n != 0)
	{
		i = 0;
		cmp = (unsigned char)c;
		dst = (unsigned char*)dest;
		source = (unsigned char*)src;
		while (i < n)
		{
			dst[i] = source[i];
			if (source[i] == cmp)
				return (dst + i + 1);
			i++;
		}
	}
	return (NULL);
}
