/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 19:47:26 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/11 17:58:33 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

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
			str[i] = f(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
