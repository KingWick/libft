/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:25:20 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/12 17:33:25 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const *str;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
	{
		return (ft_strnew(0));
	}
	str = s + ft_strlen(s) - 1;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str--;
	str = ft_strsub(s, 0, str - s + 1);
	return ((char*)str);
}
