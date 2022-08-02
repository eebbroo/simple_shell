#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void read_cmd(void);
void tokenizer(char *buf, char *buf_cpy);
void exec_cmd(char **argv);

#endif
