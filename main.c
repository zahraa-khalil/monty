#include "monty.h"

stack_t *_head_ptr = NULL;
FILE *file_p = NULL;

/**
 *checkFileData - function that checkFileData.
 *@argv: argv
 *Return: FILE *
 */

FILE *checkFileData(char *argv[])
{
	file_p = fopen(argv[1], "r");
	if (file_p == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*printf("opening file %s\n", argv[1]);*/
	return (file_p);
}

/**
 *reading_file - read from stdin.
 *@file_p: file_p
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
	/*printf("line freed\n");*/
}

/**
 *strToken - tokenize string into smaller strings
 *@str: string to execute
 *@lineNumber: lineNumber
 *Return: void.
 */

void strToken(char *str, int lineNumber)
{
	char *token;
	char *delim = "\" \t\n=";

	token = strtok(str, delim);

	while (token != NULL)
	{
		parseLine(token, lineNumber, str);
		token = strtok(NULL, "\" \t\n=");
	}
}

/**
 *parseLine - function that parseLine
 *@token: token
 *@lineNumber: lineNumber
 *@line: line
 *Return: void.
 */
void parseLine(char *token, int lineNumber, char *line)
{
	if (strcmp(token, "push") == 0)
	{
		/* Fetch the next token (which should be an integer)*/
		token = strtok(NULL, "\" \t\n=");
		if (token != NULL)
		{
			int num = atoi(token); /*Convert the token to an integer*/
			/*printf("Received integer: %d\n", num);*/
			/* Execute the line with the command and integer*/
			/*printf("lineNumber: %d\n",lineNumber);*/

			_head_ptr = _push(_head_ptr, num, lineNumber);
		}
	}
	else if (strcmp(token, "pall") == 0)
	{
		/*printf("print alllllll\n");*/
		_pall(_head_ptr);
	}
	else if (strcmp(token, "pint") == 0)
	{
		_pint(_head_ptr, lineNumber, line);
	}
	else if (strcmp(token, "pop") == 0)
	{
		_pop(&_head_ptr, lineNumber, line);
	}
}

/**
 *main - Write a program that prints all the arguments, without using ac.
 *@argv: is a NULL terminated array of strings
 *@argc: is the number of items in av
 *Return: Always 0.
 */
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
	free_stack();
	/*printf("file closed!\n");*/
	return (0);
}
