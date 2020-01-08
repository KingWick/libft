/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 19:48:16 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 17:12:21 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			i;
	char		*str;

	i = 0;
	if (s != NULL)
	{
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
		{
			return (NULL);
		}
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
