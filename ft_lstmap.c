/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:30:40 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/05 23:30:43 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*if_exist(t_list *lst, void *(*f)(void *),
		void (*del)(void *), t_list *new_lst)
{
	t_list *curr_lst;

	if (!(new_lst = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		if ((curr_lst = ft_lstnew(f(lst->content))))
		{
			ft_lstadd_back(&new_lst, curr_lst);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
	}
	if (new_lst)
		curr_lst->next = NULL;
	return (new_lst);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *return_lst;

	new_lst = NULL;
	if (!lst && !f && !del)
		return (NULL);
	else
	{
		return_lst = if_exist(lst, f, del, new_lst);
		return (return_lst);
	}
}
