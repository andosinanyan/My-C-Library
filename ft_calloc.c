/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 23:30:11 by asinanya          #+#    #+#             */
/*   Updated: 2021/01/27 23:33:40 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc_pointer;
	size_t	i;

	i = 0;
	calloc_pointer = malloc(size * count);
	if (calloc_pointer == 0)
		return (0);
	while (i <= (count * size))
	{
		*(char unsigned*)(calloc_pointer + i) = '\0';
		i++;
	}
	return (calloc_pointer);
}
