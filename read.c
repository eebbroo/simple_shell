#include "shell.h"

/**
 *read_line - Function that reads strings from command line
 *
 *@void: No arguments
 *
 *return: Return character buffer
 */

void read_line(void)
{
	size_t buf_size;
	ssize_t nread;
	char *buf = NULL;
	char *buf_cpy = NULL;

	printf("Prompt====>$$: ");
	nread = getline(&buf, &buf_size, stdin);
	if (nread == -1)
	{
		printf("\n.....logging out\n");
		return;
	}
	buf_cpy = malloc(sizeof(char) * nread);
	strcpy(buf_cpy, buf);
	tok_line(buf, buf_cpy);
	free(buf);
	free(buf_cpy);
}
