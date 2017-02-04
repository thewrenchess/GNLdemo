/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 21:27:14 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/01 21:27:15 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	ll;

	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) >= ft_strlen(s2))
		ll = ft_strlen(s1);
	else
		ll = ft_strlen(s2);
	i = 0;
	while (i < n && i < ll)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	return (0);
}
