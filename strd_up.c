#include "shell.h"

/**
 * _strdup - Return a pointer to a duplicated string
 * @s: The string to be duplicated
 *
 * Return: The address of a new string if succesful else
 * it returns NULL.
 */
char *_strdup(char *s)
{
	char *str;
	int len = 0, i;

	if (!s)
		return (NULL);

	while (s[len] != '\0')
		len++;

	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		str[i] = s[i];
	}
	str[i] = '\0';
	return (str);
}
