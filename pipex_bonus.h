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
char	*checkaccess(char *cmd, char **path);
char	***cmdopt(int argc, char *argv[]);
char	*returnpath(char *cmd, char **path);
char	**getcmdpath(char ***cmd, char **path, int argc);
void	execute(int argc, char *argv[], char ***cmd, char **cmdpath);
void	runfirst(char *argv[], int fd[], char *cmd, char **cmdpath);
void	runlast(char *argv[], int fd[], char *cmd, char **cmdpath);

#endif