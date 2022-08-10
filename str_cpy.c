#include "shell.h"

/**
 * _strduppop - Return a pointer to a duplicated string
 * @s: The string to be duplicated
 *
 * Return: The address of a new string if succesful else
 * it returns NULL.
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
