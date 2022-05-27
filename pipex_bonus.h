/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:05:56 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:05:58 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

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
	char	**argv;
	int		*pid;
	int		*i;
	int		argc;
}	t_data;

void	checkargs(int argc);
void	checkoutput(int output, t_data data);
char	*findpath(char **environ);
char	**ft_split(const char *s, char c);
int		ft_strlen(const char *s);
char	*ft_strstr(char *str, char *to_find);
char	**get_path(char **env);
char	*substr(const char *s, unsigned int start, int len);
char	*checkaccess(char *cmd, char **path);
char	***cmdopt(int argc, char *argv[]);
char	**getcmdpath(char ***cmd, char **path, int argc);
void	execute(char *argv[], t_data data);
void	run(char *cmdpath, char **cmd, t_data data);
void	rundir(char *cmdpath, char **cmd, t_data data);
void	handle_here_doc(char *argv[], t_data data);
char	***cmdopthd(int argc, char *argv[]);
char	**getcmdpathhd(char ***cmd, char **path, int argc);
void	readuntildelim(char *delimiter, t_data data);
void	runhd(char *cmdpath, char **cmd, int fd[]);
void	redir(int fd[], t_data data);
void	handle_no_infile(t_data data, int *i, int fd[]);
void	error(void);
void	memfreecmd(char ***cmd);
void	memfreecmdpath(char **cmdpath);
void	rundirhd(char *cmdpath, char **cmd, int fd[]);
void	handle_in_out(char *argv[], t_data data);
void	memfreeall(t_data data);
void	freeall(t_data data);
void	freecmd(char ***cmd);
void	freesplit(char **split);
char	*gnl(void);
char	*ft_charjoinfree(char *s1, char c, int i);
char	*get_next_line(int fd);
void	procwait(t_data data);
void	checkargshd(t_data data);
void	procwaithd(t_data data);

#endif
