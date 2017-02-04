/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:24:50 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 12:24:53 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	char	a;
	int		l;

	if (!s)
		return (NULL);
	t = (char*)s;
	a = (char)c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (t[l] == a)
			return (t + l);
		l--;
	}
	return (NULL);
}
