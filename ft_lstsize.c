/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:57:24 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 19:57:28 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int len;

	len = 0;
	if (lst)
	{
		while (lst->next != NULL)
		{
			len++;
			lst = lst->next;
		}
		return (len + 1);
	}
	else
		return (len);
}
