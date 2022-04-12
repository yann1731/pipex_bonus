#include "pipex_bonus.h"

//  ./pipex here_doc LIMITER cmd cmd1 file
//	Should behave like cmd << DELIMITER | cmd1 >> file

void	handle_here_doc(char *argv[], t_data data)
{
	int fd[2];
	int fd1;
	char *str;

	dup2(fd[0], STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	fd1 = open(HERE_DOC, O_RDONLY);
	str = get_next_line(fd1);
	while (ft_strnstrint(str, DELIMITER, ft_strlen(str)) == 0)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd1);
	}
	free(str);
}