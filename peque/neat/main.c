#include "main.h"

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("#cisfun$ ");

	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		exec(line);
		printf("#cisfun$ ");
	}

	free(line);
	exit(EXIT_SUCCESS);
}
