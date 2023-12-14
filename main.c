#include "monty.h"

FILE *checkFileData(char *argv[])
{
	FILE *file_p;

	/*need to adjust size
	char buffer[100];
	*/

	file_p = fopen(argv[1], "r");
	if (file_p == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	printf("opening file %s\n", argv[1]);
	return file_p;
}

/**
 *reading_line - read from stdin.
 *Return: line.
 */

void reading_file(FILE *file_p)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int line_number = 0;

	while ((read = getline(&line, &len, file_p)) != -1)
	{
		line_number++;
		strToken(line, line_number);
	}

	free(line);
	printf("line freed\n");
}

/**
 *strToken - tokenize string into smaller strings
 *Return: tokenzed str.
 */

void strToken(char *str, int lineNumber)
{
	char *token;
	char *delim = " ";

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("Token:%d- %s\n", lineNumber, token);
		/*str compare*/

		token = strtok(NULL, " ");
	}
}


int main(int argc, char *argv[])
{
	FILE *file_p;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_p = checkFileData(argv);

	reading_file(file_p);

	fclose(file_p);
	printf("file closed!\n");
	return 0;
}
