/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 12:50:35 by yherrera          #+#    #+#             */
/*   Updated: 2016/10/31 12:50:37 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rs;
	int		i;

	rs = ft_strnew(ft_strlen(s1));
	if (!rs)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		rs[i] = s1[i];
		i++;
	}
	return (rs);
}
