#include "shell.h"

/**
 * parse - This transforms the string to tokens
 *
 * @strt: The getline string
 * @type: 0 for commands, 1 for path
 *
 * Return: The array of string commands
 */
char **parse(char *strt, int type)
{
	int len = 1, counter = 0, i;
	char *str = NULL, *token = NULL, **toks = NULL;

	if (type == 1)
		str = _strdup(strt);
	else if (type == 0)
		str = _strduppop(strt);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && type == 0)
			len++;
		else if (str[i] == ':' && type == 1)
			len++;
	}

	if (type == 1)
		strtok(str, "=");

	toks = malloc(sizeof(char *) * len);
	if (type == 0)
		token = strtok(str, " \t\r\n\v\f\0 ");
	else if (type == 1)
		token = strtok(NULL, ":");

	while (token)
	{
		toks[counter] = _strdup(token);
		if (type == 0)
			token = strtok(NULL, " \t\r\n\v\f\0 ");
		else if (type == 1)
			token = strtok(NULL, ":");
		counter++;
	}
	toks[counter] = token;
	free(str);
	return (toks);
}
