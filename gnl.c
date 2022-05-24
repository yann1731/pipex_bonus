#include "pipex_bonus.h"

char	*ft_charjoinfree(char *s1, char c)
{
	char		*ns;

	ns = malloc(ft_strlen(s1) + 1 * sizeof(char));
	ns[ft_strlen(ns)] = c;
	ns[ft_strlen(ns) + 1] = '\0';
	free(s1);
	return (ns);
}

char    *gnl(void)
{
	char    buf;
	char    *str;
	int		i;

	i = 0;
	str = malloc(2 * sizeof(char));
	while (read(STDIN_FILENO, &buf, 1) > 0)
	{
		str[i] = buf;
		str[i + 1] = '\0';
		i++;
		if (buf == '\n')
			break ;
	}
	dprintf(STDERR_FILENO, "%s", str);
	return (str);
}