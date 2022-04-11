#include "main.h"

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;

	write(1, "$ ", 2);

	signal(SIGINT, sighand);

	while ((getline(&line, &len, stdin)) != -1)
	{
		exec(line);
		write(1, "$ ", 2);
	}

	free(line);
	exit(EXIT_SUCCESS);
}