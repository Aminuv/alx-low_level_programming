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

	of = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (filename == NULL || of == -1)
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
