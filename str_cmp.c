#include <stdio.h>

/**
 * _strcmp - This compares two strings
 *
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: An int, 0 if equal, +ve if 1 > 2
 * -ve if 1 < 2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

