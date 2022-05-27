#include "pipex.h"

void	checkargsman(int argc)
{
	if (argc != 5)
	{
		ft_putstr_fd("Enter 4 arguments\n", STDERR_FILENO);
		exit(1);
	}
}