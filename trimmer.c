#include "shell.h"

/**
 * remove_space - Removes whitespace from both sides of a string
 *
 * @str: input string
 *
 * Return: The new trimmed string
 */
char *remove_space(char *str)
{
	int str_len, actual, i;
	char *mem;

	str_len = 0;
	actual = 0;
	while (str[str_len] != '\0')
		str_len++;

	mem = malloc(sizeof(char) * str_len);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\n')
		{
			mem[actual] = str[i];
			actual++;
		}
	}
	mem[actual] = '\0';

	return (mem);
}
