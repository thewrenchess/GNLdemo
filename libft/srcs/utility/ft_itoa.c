/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:19:58 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/08 15:19:59 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static size_t	countnbr(int n)
{
	size_t	rs;

	rs = 0;
	while (n)
	{
		n = n / 10;
		rs++;
	}
	return (rs);
}

static void		ft_strrev_e(char *rs)
{
	size_t	i;
	size_t	l;
	char	temp;

	i = 0;
	l = 0;
	while (rs[l])
		l++;
	if (rs[i] == '-')
	{
		i++;
		l++;
	}
	while (i < l / 2)
	{
		temp = rs[i];
		rs[i] = rs[l - i - 1];
		rs[l - i - 1] = temp;
		i++;
	}
}

static void		convert(char *rs, int n, size_t i)
{
	while (n)
	{
		rs[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	ft_strrev_e(rs);
}

char			*ft_itoa(int n)
{
	char	*rs;
	size_t	i;
	size_t	count;

	count = countnbr(n);
	rs = ft_strnew(count + 1);
	if (!rs)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(rs, "-2147483648"));
	if (n == 0)
		return (ft_strcpy(rs, "0"));
	i = 0;
	if (n < 0)
	{
		rs[i] = '-';
		n = -1 * n;
		i++;
	}
	convert(rs, n, i);
	return (rs);
}
