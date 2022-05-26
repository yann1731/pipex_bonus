#include "pipex_bonus.h"

void	checkoutput(int output, t_data data)
{
	if (output == -1)
	{
		freeall(data);
		perror("error ");
		exit(1);
	}
}
