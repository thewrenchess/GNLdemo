/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 16:50:45 by yherrera          #+#    #+#             */
/*   Updated: 2017/01/03 16:50:49 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/get_next_line.h"

static void		joinline(char **line, char *s)
{
	char	*temp;

	temp = ft_strjoin(*line, s);
	ft_strdel(line);
	*line = temp;
}

static void		strmanipulate(char **line, char **save, char *buf, int pos)
{
	char	*temp;

	temp = ft_strnew(BUFF_SIZE);
	temp = ft_strncpy(temp, buf, pos);
	joinline(line, temp);
	ft_strdel(&temp);
	*save = ft_strcpy(*save, ft_strchr(buf, '\n') + 1);
}

static int		readin(const int fd, char **line, char **save)
{
	int		pos;
	int		ret;
	char	*buf;

	joinline(line, *save);
	ft_bzero(*save, ft_strlen(*save));
	buf = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if ((pos = ft_strcheckch(buf, '\n')) >= 0)
		{
			strmanipulate(line, save, buf, pos);
			ft_strdel(&buf);
			return (1);
		}
		joinline(line, buf);
		ft_bzero(buf, BUFF_SIZE);
	}
	ft_strdel(&buf);
	if (ret < 0)
		return (-1);
	if (**line)
		return (1);
	return (0);
}

static t_list	*lstwork(t_list **lst, const int fd, const int fn)
{
	t_list	*tlst;
	char	*temp;

	if (fn)
	{
		temp = ft_strnew(BUFF_SIZE);
		tlst = (t_list*)malloc(sizeof(t_list));
		tlst->content = malloc(BUFF_SIZE);
		tlst->content = ft_memcpy(tlst->content, temp, BUFF_SIZE);
		ft_strdel(&temp);
		tlst->content_size = fd;
		ft_lstadd(lst, tlst);
		return (*lst);
	}
	tlst = *lst;
	while (tlst)
	{
		if ((int)tlst->content_size == fd)
			return (tlst);
		tlst = tlst->next;
	}
	return (lstwork(lst, fd, 1));
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*lst;
	char			*save;
	int				pos;
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	*line = ft_strnew(BUFF_SIZE);
	save = (lstwork(&lst, fd, 0))->content;
	if ((pos = ft_strcheckch(save, '\n')) >= 0)
	{
		strmanipulate(line, &save, save, pos);
		return (1);
	}
	else
		ret = readin(fd, line, &save);
	if (ret <= 0)
	{
		ft_lstdelone(&lst, fd);
		return (ret);
	}
	else if (ret > 0 || *save)
		return (1);
	return (-1);
}
