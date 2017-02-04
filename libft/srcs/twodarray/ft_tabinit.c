/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:05:38 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/16 20:05:40 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	**ft_tabinit(size_t count, size_t len)
{
	char	**rs;
	size_t	i;

	rs = (char**)malloc(sizeof(char*) * (count + 1));
	if (!rs)
		return (NULL);
	i = 0;
	while (i < count)
	{
		rs[i] = ft_strnew(len);
		if (!rs[i])
			return (NULL);
		i++;
	}
	rs[i] = (char*)malloc(sizeof(NULL));
	rs[i] = NULL;
	return (rs);
}
