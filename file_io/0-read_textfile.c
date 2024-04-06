#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd_let, numb;
	char *buffer;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd_let = read(op, buffer, letters);
	if (rd_let < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[rd_let] = '\0';
	close(op);

	numb = write(STDOUT_FILENO, buffer, rd_let);
	if (numb < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (numb);
}
