#include "pipex_bonus.h"

void	run(char *cmdpath, char **cmd, t_data data)
{
	char **env;

	env = NULL;
	execve(cmdpath, cmd, env);
	ft_putstr_fd("zsh: No such file or directory: ", STDERR_FILENO);
	ft_putstr_fd(cmd[0], STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	freeall(data);
	exit(1);
}

