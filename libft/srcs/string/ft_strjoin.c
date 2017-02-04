/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:35:50 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/07 15:35:51 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static char		*ft_strcpy_e(char *dst, const char *src, size_t start)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[start] = src[i];
		i++;
		start++;
	}
	dst[start] = '\0';
	return (dst);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*rs;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	rs = ft_strnew(l1 + l2);
	if (!rs)
		return (NULL);
	rs = ft_strcpy(rs, s1);
	rs = ft_strcpy_e(rs, s2, l1);
	return (rs);
}
