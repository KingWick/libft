/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 15:38:55 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 17:07:03 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		length;
	int		sign;
	char	*str;

	sign = n;
	length = 1;
	while (sign /= 10)
		length++;
	sign = n < 0 ? 1 : 0;
	length = n < 0 ? length += 1 : length;
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	str = ft_strnew(length);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	n = n < 0 ? n *= -1 : n;
	while (--length >= sign)
	{
		str[length] = (n >= 10) ? (n % 10) + 48 : n + 48;
		n /= 10;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}
