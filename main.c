#include "pipex_bonus.h"

int	main(int argc, char *argv[])
{
	char	**path;
	char	**cmds;

	checkargs(argc);
	path = get_path();
	cmds = checkaccess(argc, argv, path);
	printf("%s\n", cmds[0]);
	// int i = -1;
	// while (cmds[++i])
	// 	printf("%s\n", cmds[i]);
}