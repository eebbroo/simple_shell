#include "shell.h"

 /**
  * find_path - A function that find the path to environment variables
  *
  * @env: This is the environment varaible
  *
  * Return: The path string.
  */

char *find_path(char **env)
{
	char *path;
	int i, pathInt = 0;

	for (i = 0; env[i] != NULL; i++)
	{
		if (env[i][0] == 'P' && env[i][1] == 'A'
				&& env[i][2] == 'T' && env[i][3] == 'H')
		{
			pathInt = i;
			break;
		}
		else
			continue;
	}

	if (pathInt)
	{
		path = _strdup(env[pathInt]);
		return (path);
	}
	return (NULL);
}
