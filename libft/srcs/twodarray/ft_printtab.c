/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:37:37 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/23 10:37:38 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	ft_printtab(char **tab)
{
	size_t	i;

	if (!tab || !*tab)
		return ;
	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
