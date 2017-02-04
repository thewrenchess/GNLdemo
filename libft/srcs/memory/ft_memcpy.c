/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:46:40 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/02 18:46:41 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static size_t	set_z(const char *t_src, size_t n)
{
	size_t	l;

	l = ft_strlen(t_src);
	if (l >= n)
		return (n);
	else
		return (l);
}

void			*ft_memcpy(void *restrict dst,
							const void *restrict src, size_t n)
{
	char	*t_dst;
	char	*t_src;
	size_t	i;
	size_t	z;

	if (!dst || !src)
		return (NULL);
	t_dst = (char*)dst;
	t_src = (char*)src;
	i = 0;
	z = set_z(t_src, n);
	while (i < z)
	{
		t_dst[i] = t_src[i];
		i++;
	}
	if (z == ft_strlen(t_src))
		t_dst[i] = '\0';
	return (dst);
}
