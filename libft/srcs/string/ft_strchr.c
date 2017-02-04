/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:35:21 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 11:35:22 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;
	size_t	i;
	size_t	l;

	if (!s)
		return (NULL);
	t = (char*)s;
	l = ft_strlen(s);
	i = 0;
	while (i <= l && s[i] != c)
		i++;
	if (i > l)
		return (NULL);
	else
		return (t + i);
}
