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

char **parse(char *strt, int type);
char *_strdup(char *s);
char *remove_space(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
void checks(char **toks, char **env __attribute__((unused)), int *status);
char *find_path(char **env);
void addPath(char **command, char **env, int *status);
char *_strduppop(char *s);

#endif
