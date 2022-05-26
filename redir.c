#include "pipex_bonus.h"

void	redir(int fd[], t_data data)
{
	checkoutput(pipe(fd), data);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
}