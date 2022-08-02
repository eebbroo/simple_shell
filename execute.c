#include "shell.h"

/**
 *exec_cmd - Function that executes commands
 *
 *@argv: Argument vector
 *
 *return: Returns zero on success
 */

void exec_cmd(char **argv)
{
	pid_t pid;

	pid = fork();
	if (pid != 0)
	{
		wait(NULL);
		read_cmd();
	}
	else
	{
		if (execve(argv[0], argv, NULL) == -1)
			perror("Prompt====>$$");
	}
}
