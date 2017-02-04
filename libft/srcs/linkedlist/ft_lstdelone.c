/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:50:06 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/08 17:50:08 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	ft_lstdelone(t_list **lst, size_t nb)
{
	t_list	*alst;
	t_list	*tlst;

	tlst = *lst;
	alst = tlst;
	while (tlst->content_size != nb)
	{
		alst = tlst;
		tlst = tlst->next;
	}
	if (alst != tlst)
		alst->next = tlst->next;
	else
		*lst = (*lst)->next;
	free(tlst->content);
	tlst->next = NULL;
	free(tlst);
	tlst = NULL;
}
