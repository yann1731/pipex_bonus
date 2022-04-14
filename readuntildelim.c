#include "pipex_bonus.h"

void	readuntildelim(char *argv[], int fd[])
{
	int		fd1;
	char	*str;

	fd1 = open(HERE_DOC, O_RDONLY);
	str = get_next_line(fd1);
	while (ft_strnstrint(str, DELIMITER, ft_strlen(str)) == 0)
	{
		ft_putstr_fd(str, fd[1]);
		free(str);
		str = get_next_line(fd1);
	}
	close(fd1);
	close(fd[1]);
}