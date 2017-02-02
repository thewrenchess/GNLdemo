#include "demo.h"

static void	gd_printref(t_file *files)
{
	t_file	*temp;

	temp = files;
	ft_putendl("Here is a list of the open files ready to be read from: ");
	while (temp)
	{
		ft_putnbr(temp->fd);
		ft_putstr(" --- ");
		ft_putendl(temp->filename);
		temp = temp->next;
	}
	ft_putendl("exit -- to exit");
	ft_putstr("Please enter the number of the file which you would like to read from: ");
}

static int	gd_checkfd(t_file *files, int fd)
{
	t_file	*temp;

	temp = files;
	while (temp)
	{
		if (temp->fd == fd)
			return (0);
		temp = temp->next;
	}
	return (-1);
}

static void	gd_filedelone(t_file **files, int fd)
{
	t_file	*afile;
	t_file	*tfile;

	tfile = *files;
	afile = tfile;
	while (tfile->fd != fd)
	{
		afile = tfile;
		tfile = tfile->next;
	}
	if (afile != tfile)
		afile->next = tfile->next;
	else
		*files = (*files)->next;
	ft_strdel(&(tfile->filename));
	close(tfile->fd);
	tfile->next = NULL;
	free(tfile);
	tfile = NULL;
}

t_file		*gd_readfiles(t_file *files)
{
	char	*line;
	int		fd;
	int		ret;

	if (!files)
	{
		ft_putendl("There is no file left to read.\nExiting...");
		sleep(1);
		ft_putendl("Hope you enjoyed get_next_line");
		return (files);
	}
	gd_printref(files);
	get_next_line(0, &line);
	if CHECK
	{
		ft_putendl("Hope you enjoyed get_next_line :)");
		return (files);
	}
	fd = ft_atoi(line);
	if (gd_checkfd(files, fd))
	{
		ft_putendl("Please enter a valid number.\n\n-------------------\n");
		ft_strdel(&line);
		return (gd_readfiles(files));
	}
	ret = get_next_line(fd, &line);
	if (ret == 1)
	{
		ft_putendl("The next line is...");
		ft_putchar('\n');
		sleep(1);
		ft_putendl(line);
		ft_putendl("\n\n------------------------\n");
		ft_strdel(&line);
		return (gd_readfiles(files));
	}
	else if (ret == 0)
	{
		ft_putendl("\nThis file is read through.");
		sleep(1);
		ft_putendl("Closing this file...\n\n-------------------\n");
		gd_filedelone(&files, fd);
		return (gd_readfiles(files));
	}
	return (files);
}