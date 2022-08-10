#include <stdlib.h>

/**
 * _strcat - Concatenates one string to another
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *ret;
	int destLength = 0;
	int srcLength = 0;

	while (dest[destLength] != '\0')
		destLength++;
	destLength++;
	while (src[srcLength] != '\0')
		srcLength++;

	ret = malloc(sizeof(char) * (destLength + srcLength + 1));

	for (i = 0; dest[i] != '\0'; i++)
		ret[i] = dest[i];
	ret[i] = '/';
	for (i = 0; src[i] != '\0'; i++)
		ret[destLength + i] = src[i];

	ret[destLength + i] = '\0';
	return (ret);
}
