#include "pipex_bonus.h"

char	***cmdopthd(int argc, char *argv[])
{
	int		count;
	int		start;
	int		i;
	char	***cmd;

	count = argc - 4;
	start = 0;
	i = 3;
	cmd = malloc((count + 1) * sizeof(char **));
	if (cmd == NULL)
		return (NULL);
	while (count > 0)
	{
		cmd[start] = ft_split(argv[i], ' ');
		if (cmd[start] == NULL)
			return (NULL);
		count--;
		i++;
		start++;
	}
	cmd[start] = NULL;
	return (cmd);
}