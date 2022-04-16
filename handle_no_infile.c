#include "pipex_bonus.h"

void	handle_no_infile(t_data data, int *i, int fd[])
{
	perror("Error");
	redir(fd, i);
	while (++*i < data.argc - 4)
		rundir(data.cmdpath[*i], data.cmd[*i]);
}