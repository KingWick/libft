/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:49:59 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/09 17:52:24 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0' && n > 0)
	{
		i++;
		j++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}
