#include "shell.h"

/**
 * _strcpy - Return a pointer to a duplicated string
 *
 * @dest: destination string
 * @src: Source string
 *
 * Return: destination string.
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = src;
	int i = 0;

	while (*ptr != '\0')
	{
		dest[i] = *ptr;
		i++;
		ptr++;
	}
	dest[i] = *ptr;
	return (dest);
}
