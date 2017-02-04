/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:42:44 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 15:42:46 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*rs;

	rs = malloc(size);
	if (!rs)
		return (NULL);
	ft_bzero(rs, size);
	return (rs);
}
