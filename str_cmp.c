#include <stdio.h>

/**
 * _strcmp - This compares two strings
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: An int, 0 if equal, +ve if 1 > 2
 * -ve if 1 < 2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
