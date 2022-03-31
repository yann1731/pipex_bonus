#include "pipex_bonus.h"

int	main(int argc, char *argv[])
{
	char	**path;
	char	***cmd;
	char	**cmdpath;

	checkargs(argc);
	path = get_path();
	cmd = cmdopt(argc, argv);
	cmdpath = getcmdpath(cmd, path, argc);
	return (0);
}