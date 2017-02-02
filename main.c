#include "demo.h"

static void	gd_filedel(t_file **files)
{
	t_file	*temp1;
	t_file	*temp2;

	temp1 = *files;
	while (temp1)
	{
		temp2 = temp1->next;
		ft_strdel(&(temp1->filename));
		close(temp1->fd);
		free(temp1);
		temp1 = temp2;
	}
	*files = NULL;
}

int	main(void)
{
	char	*line;
	t_file	*files;

	ft_putstr("Would you like to skip intro?(y/n): ");
	get_next_line(0, &line);
	if (!ft_strcmp(line, "n") || !ft_strcmp(line, "N"))
	{
		ft_strdel(&line);
		intro();
	}
	files = gd_getfiles();
	if (!files)
	{
		ft_putendl("Thank you for your time :)");
		return (1);
	}
	files = gd_readfiles(files);
	gd_filedel(&files);
	return (0);
}