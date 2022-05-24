#include "pipex_bonus.h"

void	handle_no_infile(t_data data, int *i, int fd[])
{
	ft_putstr_fd("zsh: No such file or directory: ", STDERR_FILENO);
	ft_putstr_fd(data.argv[1], STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	redir(fd);
	*i = 0;
	while (++*i < data.argc - 4)
		rundir(data.cmdpath[*i], data.cmd[*i], data);
}