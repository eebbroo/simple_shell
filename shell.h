#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void read_line(void);
void tok_line(char *buf, char *buf_cpy);
void exec_line(char **argv);

#endif
