/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:27:28 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/16 19:27:39 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*a;

	j = 0;
	if (!(a = (char*)malloc(sizeof(*s) * len + 1)) || !s)
	{
		return (NULL);
	}
	while (s[start] && j < len && start < ft_strlen(s))
	{
		a[j] = s[start];
		j++;
		start++;
	}
	a[j] = '\0';
	return (a);
}
