/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:09:56 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:48:18 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	tab;

	tab = (char)c;
	while (*s != '\0' && *s != tab)
	{
		s++;
	}
	if (*s != tab)
	{
		return (NULL);
	}
	else
		return ((char*)s);
}
