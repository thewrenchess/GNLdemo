#ifndef DEMO_H
# define DEMO_H

# include "libft/hdrs/libft.h"

# define BUFF_SIZE 64
# define CHECK (!ft_strcmp(line, "exit") || !ft_strcmp(line, "Exit") || !ft_strcmp(line, "EXIT"))

typedef struct		s_file
{
	char			*filename;
	int				fd;
	struct s_file	*next;
}					t_file;

void				intro(void);
t_file				*gd_getfiles(void);
t_file				*gd_readfiles(t_file *files);

#endif