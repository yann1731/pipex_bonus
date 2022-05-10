#include "pipex_bonus.h"

void	memfreecmd(char ***cmd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (cmd[i])
	{
		while (cmd[i][j])
		{
			free(cmd[i][j]);
			j++;
		}
		free(cmd[i]);
		j = 0;
		i++;
	}
	free(cmd);
	error();
}