#include "pipex_bonus.h"

void	procwait(t_data data)
{
	int	i;

	i = -1;
	while (++i < (data.argc - 3))
		waitpid(data.pid[i], NULL, 0);
	freeall(data);
}