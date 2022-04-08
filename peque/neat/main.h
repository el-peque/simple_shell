#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>

/**
 * struct format - Struct
 *
 * @command: The command
 * @f: The function associated
 */
typedef struct format
{
	char *command;
	int (*f)(char **argv);

} Tformat;


int _chdir(char **path);
void _exit_(char *stat, char *s);
int exec(char *s);
void sig_handler(int signum);
int _strcmp(char *s1, char *s2);
/*void print_history(char *filename);*/
extern char **environ;

#endif /* MAIN */
