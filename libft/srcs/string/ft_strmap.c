/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:52:36 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/07 12:52:39 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*rs;
	size_t	i;

	if (!s || !f)
		return (NULL);
	rs = ft_strnew(ft_strlen(s));
	if (!rs)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rs[i] = f(s[i]);
		i++;
	}
	return (rs);
}
