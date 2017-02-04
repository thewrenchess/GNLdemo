/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:31:33 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 10:31:35 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static void	*ft_memcpy_bwd(void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0 || s1 == s2)
		return (s1);
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (n--)
	{
		c1[n] = c2[n];
	}
	return (s1);
}

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (NULL);
	if (s1 < s2)
		return (ft_memcpy(s1, s2, n));
	if (s1 > s2)
		return (ft_memcpy_bwd(s1, s2, n));
	return (s1);
}
