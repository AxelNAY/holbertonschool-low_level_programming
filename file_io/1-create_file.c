#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: content of the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, w, op;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		w = write(op, text_content, i);
		if (w != i)
			return (-1);
	}
	close(op);

	return (1);
}
