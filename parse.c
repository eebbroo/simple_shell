#include "shell.h"

/**
 * parser - separate command from argumets
 * @buf: command to be separate
 * @cmd: array where commands will be store
 * Return: Nothing
 */

void parser(char *buf, char **cmd)
{
	char *ptr;
	int i = 0;

	ptr = strtok(buf, " \n");

	while (ptr)
	{
		if (_strcmp(ptr, "#") == 0)
		{
			cmd[i] = NULL;
			return;
		}
		cmd[i] = ptr;
		ptr = strtok(NULL, " \n");
		i++;
	}

	cmd[i] = NULL;

}
