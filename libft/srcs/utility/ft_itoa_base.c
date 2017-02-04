/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:07:17 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/09 13:07:18 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

static char	*ft_strdup_e(const char *s, const size_t b)
{
	char	*rs;
	size_t	i;

	rs = (char*)malloc(sizeof(rs) * (b + 1));
	if (!rs)
		return (NULL);
	i = 0;
	while (i < b)
	{
		rs[i] = s[i];
		i++;
	}
	rs[i] = '\0';
	return (rs);
}

static void	ft_strrev_e(char *s)
{
	size_t	i;
	size_t	l;
	char	temp;

	i = 0;
	l = 0;
	while (s[l])
		l++;
	if (s[i] == '-')
	{
		i++;
		l++;
	}
	while (i < l / 2)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		i++;
	}
}

static char	*convert(char *rs, size_t v, size_t neg, const size_t b)
{
	char	*ref;
	size_t	i;

	ref = ft_strdup_e("0123456789ABCDEF", b);
	if (!ref)
		return (NULL);
	i = 0;
	if (neg == 1)
	{
		rs[i] = '-';
		i++;
	}
	while (v)
	{
		rs[i] = ref[v % b];
		i++;
		v = v / b;
	}
	free(ref);
	rs[i] = '\0';
	ft_strrev_e(rs);
	return (rs);
}

char		*ft_itoa_base(int nbr, size_t base)
{
	char	*rs;
	size_t	v;
	size_t	neg;

	if (base < 2 || base > 16)
		return (NULL);
	rs = (char*)malloc(sizeof(rs) * 35);
	if (!rs)
		return (NULL);
	if (nbr == 0)
		return (ft_strcpy(rs, "0"));
	neg = 0;
	if (nbr < 0)
	{
		if (base == 10)
			neg = 1;
		if (nbr == -2147483648)
			v = 2147483648;
		else
			v = (size_t)(-1 * nbr);
	}
	else
		v = (size_t)nbr;
	return (convert(rs, v, neg, base));
}
