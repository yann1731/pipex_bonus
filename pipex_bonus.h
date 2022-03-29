#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <errno.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>

void	checkargs(int argc);
void	checkoutput(int output);
char	*findpath(char **environ);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoinfree(char const *s1, char const *s2);
int		ft_strlen(const char *s);
char	*ft_strstr(char *str, char *to_find);
char	**get_path(void);
char	*substr(const char *s, unsigned int start, int len);
char	**checkaccess(int argc, char *argv[], char **path);

#endif