#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H
# define DELIMITER argv[2]
# define HERE_DOC argv[1]

# include <errno.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_data
{
	char	***cmd;
	char	**cmdpath;
	char	**path;
	int		argc;
}	t_data;

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
char    **getcmdpath(char ***cmd, char **path, int argc);
void	execute(char *argv[], t_data data);
void	runfirst(char *argv[], int fd[], char *cmdpath, char **cmd);
void	runlast(char *argv[], int fd[], char *cmdpath, char **cmd);
void	run(char *cmdpath, char **cmd);
void	rundir(char *cmdpath, char **cmd);
void	handle_here_doc(char *argv[], t_data data);
char	***cmdopthd(int argc, char *argv[]);
char    **getcmdpathhd(char ***cmd, char **path, int argc);
void	readuntildelim(char *argv[], int fd[]);
void	runhd(char *cmdpath, char **cmd, int fd[]);

#endif