#include "pipex_bonus.h"

char	*checkaccess(char *cmd, char **path)
{
	int		i;
	char	*cmdpath;

	i = 0;
	while (path[i])
	{
		if (access(cmd, F_OK) == 0)
			return (ft_strdup(cmd));
		cmdpath = ft_strjoin(path[i], "/");
		cmdpath = ft_strjoinfree(cmdpath, cmd);
		if (access(cmdpath, F_OK) == 0)
			return (cmdpath);
		free(cmdpath);
		i++;
	}
	return (NULL);
}