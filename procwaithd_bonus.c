#include "pipex_bonus.h"

void	procwaithd(t_data data)
{
	int	i;

	i = -1;
	while (++i < (data.argc - 4))
		waitpid(data.pid[i], NULL, 0);
	freeall(data);
}