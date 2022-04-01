#include "pipex_bonus.h"

int	main(int argc, char *argv[])
{
	t_data data;

	checkargs(argc);
	data.argc = argc;
	data.path = get_path();
	data.cmd = cmdopt(argc, argv);
	data.cmdpath = getcmdpath(data.cmd, data.path, data.argc);
	execute(argv, data);
	return (0);
}