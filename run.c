#include "pipex_bonus.h"

void	run(char *cmdpath, char **cmd, t_data data)
{
	char **env;

	env = NULL;
	execve(cmdpath, cmd, env);
	ft_putstr_fd("command not found\n", STDERR_FILENO);
	freeall(data);
	exit(1);
}

