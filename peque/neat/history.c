#include "main.h"

void print_history(char *filename)
{
	char *buf;
	size_t size;
	int f, i = 0;
	unsigned int n = 1;
	char *tok[1024];
	struct stat st;

	stat(filename, &st);
	size = st.st_size;

	f = open(filename, O_RDONLY, 0400);

	buf = malloc(sizeof(char) * size);
	read(f, buf, size);

/*	tok = malloc(1);
 */
	while (buf[i] != '\0')
	{
		for (i = 0; buf[i] != '\n'; i++)
		{
		}
		n++;
/*		tok = realloc(tok, (n) * sizeof(char *));
		tok[n] = malloc(sizeof(char) * i);
*/
	}
	i = 0;
	printf("n: %u\n", n);

	read(f, buf, size);

	tok[i] = strtok(buf, "\n");

	while (tok[i] != NULL)
	{
		printf("%d %s\n", i, tok[i]);
		tok[++i] = strtok(NULL, "\n");
	}

/*	free(tok);
 */
	free(buf);
	close(f);
}