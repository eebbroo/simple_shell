#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <sys/wait.h>

int _atoi(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);

void print_prompt(void);
void parser(char *, char **);
int add_path(char **cmd);
void print_env(char **);
int REPL(char *buf, size_t buflen, char **cmd, char **argv, char **env);
int get_arr_len(char **s);
void execute_cmd(char **cmd, char **argv, char **env);
int _printf(const char *format, ...);

#endif
