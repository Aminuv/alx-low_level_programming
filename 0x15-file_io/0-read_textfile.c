#include "main.h"

/**
 * read_textfile - The function that reads a file and prints it to POSIX.
 * @filename: pointer to the name.
 * @letters: number of letter for read and print.
 *
 * Return: 0 if is it NULL, else actual num of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int of, br, bw;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL || buf == NULL)
		return (0);

	of = open(filename, O_RDONLY);
	br = read(of, buf, letters);
	bw = write(STDOUT_FILENO, buf, br);
	if (of == -1 || br == -1 || bw == -1 || br != bw)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(of);
	return (br);
}
