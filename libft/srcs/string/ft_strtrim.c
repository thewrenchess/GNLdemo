/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:07:31 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/07 16:07:32 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static char	*realtrim(const char *s, size_t start, size_t end)
{
	char	*rs;
	size_t	i;

	rs = ft_strnew(end - start + 1);
	if (!rs)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		rs[i] = s[start];
		i++;
		start++;
	}
	return (rs);
}

char		*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	return (realtrim(s, start, end));
}
