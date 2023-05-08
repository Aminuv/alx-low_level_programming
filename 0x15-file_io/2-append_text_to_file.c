#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file.
 * @filname: the name of file.
 * @text_content: pointer to string.
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int of, bw, text;

	of = open(filename, O_WRONLY | O_APPEND);	
	if (filename == NULL || of == -1)
		return (-1);

	text = 0;
	if (text_content != NULL)
	{
		while (text_content[text] != '\0')
			text++;
	}
	bw = write(of, text_content, text);
	close(of);
	
	if (bw == -1)
		return (-1);

	return (1);
}
