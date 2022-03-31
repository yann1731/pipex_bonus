#include "pipex_bonus.h"

char	*checkaccess(char *cmd, char **path)
{
	int		i;
	char	*cmdpath;

	i = 0;
	while (path[i])
	{
		cmdpath = ft_strjoin(path[i], "/");
		cmdpath = ft_strjoinfree(cmdpath, cmd);
		if (access(cmdpath, F_OK) == 0)
			return (cmdpath);
		free(cmdpath);
		i++;
	}
	return (NULL);
}