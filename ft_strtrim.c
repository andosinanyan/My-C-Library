/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:29:11 by asinanya          #+#    #+#             */
/*   Updated: 2021/02/02 01:38:47 by asinanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		charexists(char const *set, char const chartocheck)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (chartocheck == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	void	fchars(char const *s1, char const *set, char *rvalue, int *cnt)
{
	while (*s1)
	{
		if (charexists(set, *s1) == 1 && *cnt == 0)
			s1++;
		else
		{
			*rvalue = *s1;
			rvalue++;
			s1++;
			*cnt += 1;
		}
	}
	*rvalue = '\0';
}

static	void	bchars(char const *set, char *rvalue, int *cnt, int *p)
{
	int			j;
	int			firstfound;

	j = 1;
	firstfound = 0;
	if (*cnt != 0)
		rvalue += (ft_strlen(rvalue) - 1);
	while (j < *cnt)
	{
		if (charexists(set, *rvalue) == 1 && firstfound == 0)
			*p += 1;
		else
			firstfound++;
		rvalue--;
		j++;
	}
}

static	void	*finallstring(char *rvalue, int *p)
{
	int			size;
	char		*s;

	size = ft_strlen(rvalue);
	size -= *p;
	if (!(s = (char*)malloc(size + 1)))
		return (0);
	ft_memmove(s, rvalue, size);
	*(s + size) = '\0';
	free(rvalue);
	return (s);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int			s1len;
	int			setlen;
	char		*rvalue;
	int			cnt;
	int			p;

	p = 0;
	cnt = 0;
	if (!s1 || !set)
		return (0);
	s1len = (int)ft_strlen(s1);
	setlen = (int)ft_strlen(set);
	if (!(rvalue = (char*)malloc(s1len + 1)))
		return (0);
	fchars(s1, set, rvalue, &cnt);
	bchars(set, rvalue, &cnt, &p);
	return (finallstring(rvalue, &p));
}
