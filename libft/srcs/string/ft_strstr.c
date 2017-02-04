/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:31:29 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/03 14:31:30 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static size_t	check(const char *big, const char *little, size_t i, size_t j)
{
	if (!big[i] && little[j])
		return (0);
	else if (!little[j])
		return (i);
	if (big[i] != little[j])
		return (check(big, little, i + 1, 0));
	else
		return (check(big, little, i + 1, j + 1));
}

char			*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	k;
	char	*temp;

	if (!big || !little)
		return (NULL);
	temp = (char*)big;
	if (!*little)
		return (temp);
	i = 0;
	while (big[i])
	{
		if (big[i] == little[0])
		{
			k = check(big, little, i, 0);
			if (k)
				return (temp + k - ft_strlen(little));
		}
		i++;
	}
	return (NULL);
}
