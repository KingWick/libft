/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:27:54 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:52:54 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	const char	*ts1;
	const char	*ts2;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1)
	{
		ts1 = s1;
		ts2 = s2;
		while (*ts2 != '\0' && *ts1 == *ts2)
		{
			ts1++;
			ts2++;
		}
		if (*ts2 == '\0')
		{
			return ((char*)s1);
		}
		s1++;
	}
	return (NULL);
}
