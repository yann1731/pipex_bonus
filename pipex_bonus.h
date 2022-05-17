#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H
# define DELIMITER argv[2]
# define HERE_DOC argv[1]
# define INFILE argv[1]

# include <errno.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include "libft/libft.h"
# include <paths.h>

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
void	run(char *cmdpath, char **cmd, t_data data);
void	rundir(char *cmdpath, char **cmd, t_data data);
void	handle_here_doc(char *argv[], t_data data);
char	***cmdopthd(int argc, char *argv[]);
char    **getcmdpathhd(char ***cmd, char **path, int argc);
void	readuntildelim(char *delimiter);
void	runhd(char *cmdpath, char **cmd, int fd[]);
void	redir(int fd[]);
void	handle_no_infile(t_data data, int *i, int fd[]);
int		checkdelim(const char *haystack, const char *needle);
void	error(void);
void	memfreecmd(char ***cmd);
void	memfreecmdpath(char **cmdpath);
void	rundirhd(char *cmdpath, char **cmd, int fd[]);
void    handle_in_out(char *argv[], t_data data);
void    memfreeall(t_data data);
void    freeall(t_data data);
void    freecmd(char ***cmd);
void    freesplit(char **split);

#endif