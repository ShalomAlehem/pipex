#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"

extern char	**environ;

void	pipex(int argc, char **argv);
void	pipein(int pipefd[2], int in, char *cmd1);
void	pipeout(int pipefd[2], int out, char *cmd2);
void	exec(char	*cmd, char **args);
void	test_path(char *cmd, char **args, char **path);

#endif