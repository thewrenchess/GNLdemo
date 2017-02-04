/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:27:55 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/08 18:27:57 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *alst;
	while (temp1)
	{
		temp2 = temp1->next;
		del(temp1->content, temp1->content_size);
		free(temp1);
		temp1 = temp2;
	}
	*alst = temp1;
	*alst = NULL;
}
