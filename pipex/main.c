#include "pipex.h"

int	main(int argc, char **argv)
{
	if (argc < 5)
		ft_exit("Bad arguments. Right format: ./pipex file1, cmd1 cmd2 file2");
	pipex(argc, argv);
}
