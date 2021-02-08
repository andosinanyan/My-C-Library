/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 22:22:38 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:39:09 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *st, const char *fi, size_t len)
{
	size_t	filen;
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	filen = ft_strlen(fi);
	if (!(*fi))
		return ((char*)st);
	if (filen > ft_strlen(st) || !(*st))
		return (0);
	while (i < len && st[i])
	{
		if (st[i] != *fi && st[i++] != '\0')
			continue;
		while (st[i] == *fi && st[i] != '\0' && *(fi++) != '\0' && i++ < len)
			counter++;
		if (counter == filen)
			return ((char*)(st + i - filen));
		fi -= counter;
		counter = 0;
		i++;
	}
	return (0);
}
