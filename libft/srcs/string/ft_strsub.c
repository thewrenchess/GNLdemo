/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:05:08 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/07 15:05:09 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rs;

	if (!s)
		return (NULL);
	rs = ft_strnew(len);
	if (!rs)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		rs[j] = s[i];
		i++;
		j++;
	}
	return (rs);
}
