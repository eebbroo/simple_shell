#include "shell.h"

/**
 * _strcat - Concatenates one string to another
 *
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);

	while (*src != '\0')
	{
		dest[len] = *src;
		len++;
		src++;
	}
	dest[len] = '\0';
	return (dest);
}
