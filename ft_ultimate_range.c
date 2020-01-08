/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:35:54 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 19:38:35 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int x;

	x = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		tab[x] = min;
		min++;
		x++;
	}
	*range = tab;
	return (x);
}
