/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 22:16:22 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/02 21:06:01 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	srclen(char *src)
{
	int			i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

size_t			ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (size == 0)
	{
		return (srclen((char*)src));
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen((char*)src));
}
