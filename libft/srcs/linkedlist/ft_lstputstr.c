/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:55:00 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/25 11:55:01 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	ft_lstputstr(t_list *alnk)
{
	t_list	*temp;

	if (!alnk)
		return ;
	temp = alnk->next;
	while (temp)
	{
		temp = alnk->next;
		ft_putstr(alnk->content);
		ft_putchar('\n');
		alnk = temp;
	}
}
