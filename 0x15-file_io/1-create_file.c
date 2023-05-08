#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: The name of tat file.
 * @text_content:is a pointer of straing.
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int of, bw, text;

	if (filename == NULL)
		return (-1);

	 of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (of == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (text = 0; text_content[text];)
			text++;
	}

	bw = write(of, text_content, text);
	if (bw == -1)
		return (-1);

	close(of);
	return (1);
}
