#include "pipex_bonus.h"

void	checkargs(int argc)
{
	if (argc != 5)
	{
		write(2, "Must give 4 arguments.\n", 23);
		exit(-1);
	}
}
