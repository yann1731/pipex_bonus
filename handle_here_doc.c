#include "pipex_bonus.h"

//  ./pipex here_doc LIMITER cmd cmd1 file
//	Should behave like cmd << DELIMITER | cmd1 >> file

void	handle_here_doc(char *argv[], t_data data)
{
	int fd[2];
	int fd1;

	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	fd1 = open(HERE_DOC, O_RDONLY);
	
}