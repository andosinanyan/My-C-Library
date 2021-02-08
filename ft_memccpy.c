/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:31:41 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:31:43 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char*)(src + i) != (unsigned char)c)
			*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		else
		{
			*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
