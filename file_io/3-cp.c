#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int op_rd, op_wt, rd, a, b;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op_rd = open(argv[1], O_RDONLY);
	if (op_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op_wt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(op_rd, buffer, BUFSIZ)) > 0)
	{
		if (op_wt < 0 || write(op_wt, buffer, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(op_rd);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(op_rd);
	b = close(op_wt);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_rd);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_wt);
		exit(100);
	}
	return (0);
}
