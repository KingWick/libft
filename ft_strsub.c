/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 17:58:30 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/11 17:56:48 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;

	i = 0;
	str = ft_strnew(len);
	if (s != '\0')
	{
		if (str == NULL)
		{
			return (NULL);
		}
		s = s + start;
		while (i < len)
		{
			str[i] = s[i];
			i++;
		}
		return (str);
	}
	return (NULL);
}
