/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:58:08 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 14:58:09 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static int	check(const char *big, const char *little, size_t i, size_t j)
{
	if (!big[i] && little[j])
		return (-1);
	else if (!little[j])
		return (i);
	if (big[i] != little[j])
		return (check(big, little, i + 1, j));
	else
		return (check(big, little, i + 1, j + 1));
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*temp;

	if (!big || !little)
		return (NULL);
	temp = (char*)big;
	if (!*little)
		return (temp);
	i = 0;
	j = 0;
	k = check(big, little, i, j);
	if (k == 0 || k > len)
		return (NULL);
	else
		return (temp + k - ft_strlen(little));
}
