/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 13:39:35 by yherrera          #+#    #+#             */
/*   Updated: 2017/02/05 13:39:36 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

char	*ft_strndup(char *src, size_t n)
{
	char	*rs;

	rs = ft_strnew(n);
	rs = ft_strncpy(rs, src, n);
	return (rs);
}
