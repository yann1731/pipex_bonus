#include "pipex_bonus.h"

char	*findpath(char **environ)
{
	int		i;
	char	*ptr;

	i = -1;
	while (environ[++i])
	{
		ptr = ft_strnstr(environ[i], "PATH=", ft_strlen("PATH="));
		if (ptr != NULL)
			return (ptr + 5);
	}
	return (NULL);
}