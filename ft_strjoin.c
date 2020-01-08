/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:08:36 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 17:11:35 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (tab == NULL)
		return (NULL);
	while (s1[i] != '\0')
		tab[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		tab[j++] = s2[i++];
	tab[j] = '\0';
	return (tab);
}
