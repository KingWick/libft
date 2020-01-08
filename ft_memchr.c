/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:22:28 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:44:22 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char*)str;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}
