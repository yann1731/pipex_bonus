#include "pipex_bonus.h"

void    freesplit(char **split)
{
    int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}