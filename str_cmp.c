#include <stdio.h>

/**
 * _strcmp - Function to compares two strings
 *
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: return 0 successful comp.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (i == 0)
	{
		if ((*(s1 + j) == '\0') && (*(s2 + j) == '\0'))
			break;
		i = *(s1 + j) - *(s2 + j);
		j++;
	}

	return (i);
}
