#include "pipex_bonus.h"

void	checkargshd(t_data data)
{
	if (data.argc != 6)
	{
		freeall(data);
		ft_putstr_fd("Here_doc requires 5 arguments", STDERR_FILENO);
		exit(1);
	}
}