#include "pipex_bonus.h"

char	**get_path(void)
{
	char		*path_env;
	char		**paths;

	path_env = _PATH_STDPATH;
	if (path_env == NULL)
	{
		perror("Error");
		exit(1);
	}
	paths = ft_split(path_env, ':');
	return (paths);
}