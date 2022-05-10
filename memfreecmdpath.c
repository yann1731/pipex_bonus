#include "pipex_bonus.h"

void	memfreecmdpath(char **cmdpath)
{
	int	i;

	i = -1;
	while (cmdpath[++i])
		free(cmdpath[i]);
	free(cmdpath);
	error();
}