#include "pipex_bonus.h"

int	checkdelim(const char *haystack, const char *needle)
{
	int	i;

	i = -1;
	if (!haystack)
	{
		ft_putstr_fd("Enter a valid delimiter\n", STDERR_FILENO);
		exit(-1);
	}
	while (haystack[++i])
		if (haystack[i] != needle[i])
			return (0);
	return (1);
}