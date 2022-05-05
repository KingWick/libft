/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <akdjebal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 20:44:28 by akdjebal          #+#    #+#             */
/*   Updated: 2022/05/05 20:25:33 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_comptword(const char *str, char c)
{
	int	nbrmot;
	int	i;

	i = 0;
	nbrmot = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			nbrmot++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (nbrmot);
}

static char	*ft_strndup(const char *str, char c)
{
	int	i;
	char	*s;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i] && str[i] != c)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char		**ft_split(char const *s, char c)
{
	char**tab;
	int i;
	int k;

	k = 0;
	i = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *)
		* (ft_comptword(s, c) + 1))))
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			tab[k] = ft_strndup(s + i, c);
			k++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[k] = 0;
	return (tab);
}
