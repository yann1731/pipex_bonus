#include "pipex_bonus.h"

//  ./pipex here_doc LIMITER cmd cmd1 file
//	Should behave like cmd << DELIMITER | cmd1 >> file

void	handle_here_doc(char *argv[], t_data data)
{
	int		fd1;
	int		i;
	char	*delimiter;

	i = 0;
	delimiter = ft_strjoin(DELIMITER, "\n");
	readuntildelim(delimiter);
	//free(delimiter);
	rundir(data.cmdpath[i], data.cmd[i], data);
	i++;
	fd1 = open(argv[data.argc - 1], O_WRONLY | O_APPEND | O_CREAT, 0777);
	dup2(fd1, STDOUT_FILENO);
	close(fd1);
	run(data.cmdpath[i], data.cmd[i], data);
}