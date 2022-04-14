#include "pipex_bonus.h"

//  ./pipex here_doc LIMITER cmd cmd1 file
//	Should behave like cmd << DELIMITER | cmd1 >> file

void	handle_here_doc(char *argv[], t_data data)
{
	int	fd[2];
	int	i;

	i = 0;
	checkoutput(pipe(fd));
	readuntildelim(argv, fd);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	rundir(data.cmdpath[i], data.cmd[i]);
	i++;
	fd[1] = open(argv[data.argc - 1], O_WRONLY);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	run(data.cmdpath[i], data.cmd[i]);
}