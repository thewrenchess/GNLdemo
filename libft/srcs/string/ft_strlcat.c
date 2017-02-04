/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:56:30 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/01 20:56:31 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	is;
	size_t	id;
	size_t	ls;
	size_t	ld;

	if (!dst || !src)
		return (0);
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (size <= ld)
		return (ls + size);
	id = ld;
	is = 0;
	while (src[is] && id < size - 1)
	{
		dst[id] = src[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (ls + ld);
}
