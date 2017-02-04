/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:47:21 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/08 14:47:22 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static size_t	skip(const char *s, const char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static size_t	skiprev(const char *s, const char c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (s[i] == c)
		i--;
	return (i);
}

static size_t	countsegment(const char *s,
								const char c,
								size_t a,
								const size_t z)
{
	size_t	count;

	count = 0;
	while (a <= z)
	{
		if (s[a] == c)
		{
			count++;
			while (a <= z && s[a] == c)
				a++;
		}
		a++;
	}
	return (count + 1);
}

static void		filltab(const char *s, const char c, char **rs, size_t a)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[a])
	{
		j = 0;
		while (s[a] && s[a] != c)
		{
			rs[i][j] = s[a];
			j++;
			a++;
		}
		while (s[a] && s[a] == c)
			a++;
		i++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	a;
	char	**rs;
	size_t	z;

	if (!s)
		return (NULL);
	a = skip(s, c);
	if (a == ft_strlen(s))
		return (ft_tabinit(0, 0));
	z = skiprev(s, c);
	rs = ft_tabinit(countsegment(s, c, a, z), z - a + 1);
	if (!rs)
		return (NULL);
	filltab(s, c, rs, a);
	return (rs);
}
