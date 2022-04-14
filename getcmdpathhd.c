#include "pipex_bonus.h"

char    **getcmdpathhd(char ***cmd, char **path, int argc)
{
	char	**cmdpath;
	int		count;
	int		i;

	count = argc - 4;
	cmdpath = malloc((count + 1) * sizeof(char *));
	i = 0;
	while (cmd[i])
	{
		cmdpath[i] = checkaccess(cmd[i][0], path);
		if (cmdpath[i] == NULL)
			return (NULL);
		i++;
	}
	cmdpath[count] = NULL;
	return (cmdpath);
}
