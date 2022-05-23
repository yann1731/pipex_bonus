#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int i;
	int fd;
	char	*str;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 4)
	{
		str = get_next_line(fd);
		printf("%s\n", str);
		free(str);
		i++;
	}
	return (0);
}