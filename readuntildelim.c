#include "pipex_bonus.h"

void	readuntildelim(char *argv[], int fd[])
{
	int		fd1;
	char	*str;

	fd1 = open(HERE_DOC, O_RDONLY);
	checkoutput(fd1);
	str = get_next_line(fd1);
	while (checkdelim(str, DELIMITER) == 0)
	{
		ft_putstr_fd(str, fd[1]);
		free(str);
		str = get_next_line(fd1);
	}
	free(str);
	close(fd1);
	close(fd[1]);
}