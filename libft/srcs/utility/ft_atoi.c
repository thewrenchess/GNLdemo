/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:14:24 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/02 11:14:26 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static int	checkwhitespace(const char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		return (1);
	else
		return (0);
}

static int	checksign(const char *str, int i)
{
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (i);
}

int			ft_atoi(const char *str)
{
	int	rs;
	int	i;
	int	sign;

	rs = 0;
	i = 0;
	sign = 1;
	while (checkwhitespace(str, i))
		i++;
	i = checksign(str, i);
	while (str[i])
	{
		if (str[i - 1] == '-')
			sign = -1;
		if (ft_isdigit(str[i]))
		{
			rs = rs * 10 + str[i] - '0';
			i++;
		}
		else
			return (sign * rs);
	}
	return (sign * rs);
}
