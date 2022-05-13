#include "pipex_bonus.h"

void	execute(char *argv[], t_data data)
{
	if (ft_strnstrint(HERE_DOC, "here_doc", ft_strlen(HERE_DOC)) == 1)
		handle_here_doc(argv, data);
	else
		handle_in_out(argv, data);
}