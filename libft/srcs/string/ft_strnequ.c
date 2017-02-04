/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:43:08 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/07 13:43:09 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t len)
{
	size_t	l1;
	size_t	l2;
	size_t	l;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 >= l2)
		l = l1;
	else
		l = l2;
	i = 0;
	while (i < l && i < len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
