#include "shell.h"

/**
 * _strduppop - Return a pointer to a duplicated string
 * @s: The string to be duplicated
 *
 * Return: The address of a new string if succesful else
 * it returns NULL.
 */
char *_strduppop(char *s)
{
	char *str;
	int len = 0, i;

	if (!s)
		return (NULL);

	while (s[len] != '\0')
		len++;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		str[i] = s[i];
	}
	str[i] = ' ';
	str[i + 1] = '\0';
	return (str);
}
