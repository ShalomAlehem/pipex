#include	"pipex.h"

void	pipex(int argc, char **argv)
{
	int			in;
	int			out;
	int			pipefd[2];
	pid_t		pid;

	in = open(argv[1], O_RDONLY);
	if (in == -1)
		ft_exit("Failed to open input file.");
	out = open(argv[argc - 1], O_WRONLY);
	if (out == -1)
		ft_exit("Failed to open output file.");
	if (pipe(pipefd) == -1)
		ft_exit("Failed to create a pipe.");
	pid = fork();
	if (pid == -1)
		ft_exit("Failed to fork the process.");
	if (pid == 0)
		pipeout(pipefd, out, argv[3]);
	else
		pipein(pipefd, in, argv[2]);
}

void	pipein(int pipefd[2], int in, char *cmd1)
{
	char	**args;

	close(pipefd[0]);
	args = ft_split(cmd1, ' ');
	if (dup2(in, 0) == -1)
		ft_exit("Failed to connetc infile with STDIN");
	if (dup2(pipefd[1], 1) == -1)
		ft_exit("Failed to connetc STDOUT with pipe's WRITE END");
	if (args[0][0] == '/')
	{
		if (execve(args[0], args, environ) == -1)
			ft_exit("Invalid command address.");
	}
	else
		exec(args[0], args);
	ft_freecharmatrix(args);
	close(in);
	close(pipefd[1]);
	wait(NULL);
}

void	pipeout(int pipefd[2], int out, char *cmd2)
{
	char	**args;

	close(pipefd[1]);
	args = ft_split(cmd2, ' ');
	dup2(pipefd[0], 0);
	dup2(out, 1);
	if (args[0][0] == '/')
	{
		if (execve(args[0], args, environ) == -1)
			ft_exit("Invalid command address.");
	}
	else
		exec(args[0], args);
	ft_freecharmatrix(args);
	close(out);
	close(pipefd[0]);
}

void	exec(char *cmd, char **args)
{
	int		i;
	char	**paths;

	paths = NULL;
	i = 0;
	while (environ[i])
	{
		if (ft_strncmp(environ[i], "PATH", 4) == 0)
		{
			environ[i] += 5;
			paths = ft_split(environ[i], ':');
			break ;
		}
		i++;
	}
	test_path(cmd, args, paths);
}

void	test_path(char *cmd, char **args, char **paths)
{
	int		i;
	char	*temp;
	char	*newpath;

	i = 0;
	while (paths[i])
	{
		temp = ft_strjoin(paths[i], "/");
		newpath = ft_strjoin(temp, cmd);
		execve(newpath, args, environ);
		free(newpath);
		free(temp);
		i++;
	}
	ft_freecharmatrix(paths);
	ft_exit("No such command found.");
}
