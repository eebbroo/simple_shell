#include "shell.h"

/**
 * find_path - Function to find the path of env variable
 *
 * @env: environment variable
 *
 * Return: return path
 */

char *find_path(char **env)
{
	char *path;
	int i, path_2 = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		if (env[i][0] == 'P' && env[i][1] == 'A'
				&& env[i][2] == 'T' && env[i][3] == 'H')
		{
			path_2 = i;
			break;
		}
		else
			continue;
	}

	if (path_2)
	{
		path = _strdup(env[path_2]);
		return (path);
	}
	return (NULL);
}
