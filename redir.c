#include "pipex_bonus.h"

void	redir(int fd[])
{
	checkoutput(pipe(fd));
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
}