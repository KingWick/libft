/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:21:10 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 19:39:35 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *tab;
	int x;

	x = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min + 1))))
		return (0);
	while (min < max)
	{
		tab[x] = min;
		min++;
		x++;
	}
	return (tab);
}
