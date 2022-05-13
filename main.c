#include "pipex_bonus.h"

int	main(int argc, char *argv[])
{
	t_data data;

	checkargs(argc);
	data.argc = argc;
	data.path = get_path();
	if (ft_strnstrint(HERE_DOC, "here_doc", ft_strlen(HERE_DOC)) == 0)
	{
		data.cmd = cmdopt(argc, argv);
		data.cmdpath = getcmdpath(data.cmd, data.path, data.argc);
	}
	else
	{
		data.cmd = cmdopthd(argc, argv);
		data.cmdpath = getcmdpathhd(data.cmd, data.path, argc);
	}
	freesplit(data.path);
	execute(argv, data);
	freeall(data);
	return (0);
}