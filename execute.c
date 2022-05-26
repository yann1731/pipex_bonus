#include "pipex_bonus.h"

void	execute(char *argv[], t_data data)
{
	if (ft_strcmp(argv[1], "here_doc") == 0)
	{
		data.pid = malloc((data.argc - 4) * sizeof(int));
		handle_here_doc(argv, data);
	}
	else
	{
		data.pid = malloc((data.argc - 3) * sizeof(int));
		handle_in_out(argv, data);
	}
}