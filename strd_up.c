#include "shell.h"

/**
 * _strdup - Return a pointer to a duplicated string
 *
 * @s: The string to be duplicated
 *
 * Return: return address of a new string OR NULL on fail.
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
