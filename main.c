#include "monty.h"

FILE* checkFileData(int argc, char *argv[])
{
	FILE *file_p;

	/*need to adjust size
	char buffer[100];
	*/

	

	file_p = fopen(argv[1], "r");
	if (file_p == NULL)
	{
		perror("Error opening file");
		return 1;
	}

	return file_p;
}



/**
 *reading_line - read from stdin.
 *Return: line.
 */

void reading_file(FILE * file_p)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;


	while(getline(&line, &len, file_p)!= -1)
	{
		//Parse
	}
	free(line);
}

//Parse_func
// {
	//strtok

// }


int main(int argc, char *argv[])
{
	FILE *file_p;

	if ( argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_p = checkFileData(argc, argv);

// read the file(readline, parse line)

// for(getline)
// {
// 		parsing(line)

// }

	fclose(file_p);
	return 0;
}
