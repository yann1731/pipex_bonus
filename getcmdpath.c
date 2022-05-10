#include "pipex_bonus.h"

char    **getcmdpath(char ***cmd, char **path, int argc)
{
	char	**cmdpath;
	int		count;
	int		i;

	count = argc - 3;
	cmdpath = malloc((count + 1) * sizeof(char *));
	if (cmdpath == NULL)
		error();
	i = 0;
	while (cmd[i])
	{
		cmdpath[i] = checkaccess(cmd[i][0], path);
		if (cmdpath[i] == NULL)
			memfreecmdpath(cmdpath);
		i++;
	}
	cmdpath[count] = NULL;
	return (cmdpath);
}