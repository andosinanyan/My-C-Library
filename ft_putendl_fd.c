/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 22:56:33 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:34:57 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char newline;

	if (!s)
		return ;
	newline = '\n';
	while (*s)
		write(fd, s++, 1);
	write(fd, &newline, 1);
}
