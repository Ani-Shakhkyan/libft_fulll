/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:04:45 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 20:04:57 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1);
	if (!(ptr = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memcpy(ptr, s1, size);
	*(ptr + size) = '\0';
	return (ptr);
}
