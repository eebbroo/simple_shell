#include "shell.h"

/**
 * main - The main shell program
 *
 * @ac: The argument count
 * @av: The argument vector
 *
 * @env: the environment variable
 *
 * Return: Always zero (0)
 */

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av,
		__attribute__((unused)) char **env)
{
	char *str = NULL;
	size_t strCap = 0;
	size_t strReturn = 1;
	int stats, flag;
	char **tokens;
	pid_t childPid;

	while (strReturn > 0)
	{
		flag = 1;
		printf("Ogu_Majam$ ");
		fflush(stdout);
		strReturn = getline(&str, &strCap, stdin);
		if (strReturn == ULONG_MAX)
			break;
		tokens = parse(str, 0);
		checks(tokens, env, &flag);
		if (flag == 1)
			childPid = fork();
		if (childPid != -1 && flag == 1)
		{
			if (childPid == 0)
			{
				execve(tokens[0], tokens, NULL);
				perror(av[0]);
				exit(1);
			}
			else
			{
				wait(&stats);
			}
		}
	}
	return (0);
}
