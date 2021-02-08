/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:38:21 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:38:23 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = NULL;
	if (!(s && f))
		return (NULL);
	if (!(new_s = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	else
	{
		while (*s)
		{
			new_s[i] = f(i, *s++);
			i++;
		}
		new_s[i] = '\0';
		return (new_s);
	}
}
