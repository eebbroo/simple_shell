#include "shell.h"

/**
 * main - The main shell program
 *
 * @argc: The argument count
 * @argv: The argument vector
 *
 * @env: the environment variable
 *
 * Return: Always zero (0)
 */

int main(int argc, char **argv, char **env)
{
	char *buf = NULL;
	size_t buflen = 0;
	char *cmd[20];

	(void)argc;
	REPL(buf, buflen, cmd, argv, env);
	exit(EXIT_SUCCESS);
}
