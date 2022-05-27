#include "pipex_bonus.h"

void	checkargs(int argc)
{
	if (argc < 5)
	{
		write(2, "Must give 4 or more arguments.\n",
			ft_strlen("Must give 4 or more arguments.\n"));
		exit(1);
	}
}
