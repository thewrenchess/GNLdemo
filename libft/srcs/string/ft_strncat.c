/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:59:40 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/01 18:59:42 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strncat(char *restrict s1,
					const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	l1;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i])
	{
		s1[l1 + i] = s2[i];
		i++;
	}
	s1[l1 + i] = '\0';
	return (s1);
}
