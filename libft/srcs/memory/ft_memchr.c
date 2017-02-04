/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:58:26 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 10:58:27 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t_s;
	size_t			i;
	unsigned char	a;

	if (!s)
		return (NULL);
	t_s = (unsigned char*)s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (t_s[i] == a)
			return (t_s + i);
		i++;
	}
	return (NULL);
}
