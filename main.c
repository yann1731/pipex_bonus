#include "pipex.h"

int	main(int argc, char *argv[], char *env[])
{
	t_data	data;
	int	i;

	i = -1;
	checkargsman(argc);
	data.argc = argc;
	data.path = get_path(env);
	data.argv = argv;
	data.i = &i;
	data.cmd = cmdopt(argc, argv);
	data.cmdpath = getcmdpath(data.cmd, data.path, data.argc);
	freesplit(data.path);
	executeman(argv, data);
	return (0);
}