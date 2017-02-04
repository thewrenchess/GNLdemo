/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:13:34 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/02 19:13:35 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void		*ft_memccpy(void *restrict dst,
						const void *restrict src,
						int c,
						size_t n)
{
	char	*t_dst;
	char	*t_src;
	size_t	i;
	char	a;

	if (!dst || !src)
		return (NULL);
	t_dst = (char*)dst;
	t_src = (char*)src;
	a = (char)c;
	i = 0;
	while (i < n)
	{
		t_dst[i] = t_src[i];
		if (t_src[i] == a)
			return (t_dst + i + 1);
		i++;
	}
	return (NULL);
}
