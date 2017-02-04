/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:19:31 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/02 16:19:34 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	if (!b)
		return (NULL);
	temp = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}
