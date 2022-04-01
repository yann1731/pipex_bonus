#include "pipex_bonus.h"

void	execute(char *argv[], t_data data)
{
	int	count;
    int	pid;
    int fd[2];
	int i;

    checkoutput((pipe(fd)));
	count = data.argc - 5;
	i = 0;
	pid = fork();
	if (pid == 0)
		runfirst(argv, fd, data.cmdpath[i], data.cmd[i]);
	while (count-- > 0)
	{
		i++;
		pid = fork();
		if (pid == 0)
			run(fd, data.cmdpath[i], data.cmd[i]);
	}
	i++;
	pid = fork();
	if (pid == 0)
		runlast(argv, fd, data.cmdpath[i], data.cmd[i]);
	close(fd[0]);
	close(fd[1]);
}