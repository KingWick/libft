/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdjebal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:03:18 by akdjebal          #+#    #+#             */
/*   Updated: 2019/05/14 19:12:24 by akdjebal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst != '\0' && *alst != '\0')
	{
		(*del)((*alst)->content, (*alst)->content_size);
		if ((*alst)->next)
		{
			ft_lstdel(&(*alst)->next, del);
		}
		free(*alst);
		*alst = NULL;
	}
}
