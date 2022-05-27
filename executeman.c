#include "pipex.h"

void	executeman(char *argv[], t_data data)
{
	data.pid = malloc((data.argc - 3) * sizeof(int));
	handle_in_out(argv, data);
}