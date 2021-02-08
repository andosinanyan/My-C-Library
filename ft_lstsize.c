/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:31:23 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:31:26 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int len;

	len = 0;
	if (lst)
	{
		while (lst->next != NULL)
		{
			len++;
			lst = lst->next;
		}
		return (len + 1);
	}
	else
		return (len);
}
