#include "shell.h"

/**
 * _strlen - returns the length if a string
 *
 * @s: char
 *
 * Return: int
 */

int _strlen(char *s)
{
        int _len = 0;

        while (*s != '\0')
        {
                _len++;
                s++;
        }

        return (_len);
}
