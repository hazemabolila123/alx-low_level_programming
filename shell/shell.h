#ifndef SHELL_H
#define SHELL_H

/** Librarries used in the code **/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

/** Prototypes of the user defined function used in the code **/
char **divide_line(char *str);
char *create_path(char *command);
int check_path(char *path);
void execute_process(char **commands_arr, char **argv, char *env[]);
int _strcmp(char *s1, char *s2);
int _atoi(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *str);

/** Struct used in the code **/
typedef struct builtin_s
{
	char *command;
	size_t (*fp)(char **);
} builtin_t;

#endif
