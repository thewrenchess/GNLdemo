#include "demo.h"

static void		gd_instruction(void)
{
	ft_putendl("\n------------------------------\n");
	ft_putendl("GNL can take multiple files at the same time and let you choose who to read from.");
	sleep(2);
	ft_putendl("Please enter the files you would like to read one by one.");
	sleep(1);
	ft_putendl("GNL will stop taking in filenames when you type exit or a non-existing filename.");
	sleep(2);
	ft_putendl("PS: 'badcomputer', 'horoscope', and 'littlevoice' are test files for a quick test drive.");
}

static t_file	*gd_filenew(char *filename, int fd)
{
	t_file	*file;

	file = (t_file*)malloc(sizeof(t_file));
	file->filename = ft_strdup(filename);
	file->fd = fd;
	file->next = NULL;
	return (file);
}

t_file			*gd_getfiles(void)
{
	char	*line;
	int		fd;
	t_file	*files;
	t_file	*afile;
	size_t	count;

	gd_instruction();
	fd = 0;
	files = NULL;
	count = 0;
	while (fd >= 0)
	{
		ft_putstr("Please enter a filename: ");
		get_next_line(0, &line);
		if CHECK
		{
			ft_putendl("Moving on...");
			break;
		}
		fd = open(line, O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("Failed to open ");
			ft_putendl(line);
			sleep(1);
			ft_putendl("Moving on...");
			break;
		}
		afile = gd_filenew(line, fd);
		afile->next = files;
		files = afile;
		count++;
	}
	ft_strdel(&line);
	if (count)
		return (files);
	else
		return (NULL);
}