/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:05:18 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:53:27 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*tab;

	tab = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			tab = (char*)s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char*)s);
	}
	else
		return (tab);
}
