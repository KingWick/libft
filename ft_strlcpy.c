/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:32:13 by akdjebal          #+#    #+#             */
/*   Updated: 2020/01/12 21:05:50 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t			nleft;
	const char		*s;

	s = src;
	nleft = n;
	if (!src)
		return (0);
	if (nleft != 0)
	{
		while (--nleft != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (nleft == 0)
	{
		if (n != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - s - 1);
}
