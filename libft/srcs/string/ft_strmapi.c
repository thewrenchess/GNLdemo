/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:18:58 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/07 13:19:01 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rs;
	size_t	i;

	if (!s)
		return (NULL);
	rs = ft_strnew(ft_strlen(s));
	if (!rs)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rs[i] = f(i, s[i]);
		i++;
	}
	return (rs);
}
