/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:39:52 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:39:53 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int res;

	if (c == '\0')
		return ((char*)(s + ft_strlen(s)));
	res = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			res = i;
		i++;
	}
	if (res != -1)
		return ((char*)(s + res));
	else
		return (NULL);
}
