/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:02:51 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 20:02:54 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char *)s)
	{
		while (*((unsigned char *)s))
		{
			if ((char)c == *((char *)s))
				return ((char *)s);
			s++;
		}
		if ((char)c == 0)
			return ((char *)s);
	}
	return (NULL);
}
