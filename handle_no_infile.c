#include "pipex_bonus.h"

void	handle_no_infile(t_data data, int *i, int fd[])
{
	perror("Input file error");
	redir(fd);
	*i = 0;
	while (++*i < data.argc - 4)
		rundir(data.cmdpath[*i], data.cmd[*i], data);
}