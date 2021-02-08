/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:41:43 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:23:17 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int			i;
	int			isminus;

	i = 0;
	if (!str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' && *str)
	{
		isminus = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str) && (*str >= '0' && *str <= '9'))
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	if (isminus == 1)
		i *= -1;
	return (i);
}
