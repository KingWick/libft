/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:05:19 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:47:11 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tdest;
	const char	*tsrc;

	i = 0;
	tdest = dest;
	tsrc = src;
	if (dest == NULL && src == NULL)
		n = ft_strlen(src);
	while (i < n)
	{
		tdest[i] = tsrc[i];
		i++;
	}
	return (dest);
}
