#include "shell.h"

/**
 * remove_space - Removes whitespace from both sides of a string
 *
 * @str: input string
 *
 * Return: return new string
 */
char *remove_space(char *str)
{
	int str_len, real_len, i;
	char *mem;

	str_len = 0;
	real_len = 0;
	while (str[str_len] != '\0')
		str_len++;

	mem = malloc(sizeof(char) * str_len);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\n')
		{
			mem[real_len] = str[i];
			real_len++;
		}
	}
	mem[real_len] = '\0';

	return (mem);
}
