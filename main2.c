#include "pipex_bonus.h"

int	main(void)
{
	int	fd;

	fd = open("infile", O_WRONLY);
	dup2(fd, STDOUT_FILENO);
	close(fd);
	while (1)
	{
		ft_putstr_fd("Hello I like pancakes. Theyre fucking good Hello I like pancakes. Theyre fucking good Hello I like pancakes. Theyre fucking good Hello I like pancakes. Theyre fucking good Hello I like pancakes. Theyre fucking good Hello I like pancakes. Theyre fucking good \n", STDOUT_FILENO);
	}
}