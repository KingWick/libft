/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:24:02 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 19:54:51 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		nb = i * nb;
		power--;
	}
	return (nb);
}
