#include "main.h"

/**
 * main - program
 * @arg_c: an argument count
 * @arg_v: an argument vector
 *
 * Reatur: 1 or 0
 */
int main(int arg_c, char **arg_v)
{
	ssize_t ln;
	int f, fi = 0;
	char buff[1024];

	if (arg_c != 3)
	{
		dprintf(STDERR_FILENO,  "Usage: cp file_from file_to\n");
		exit(97);
	}

	f = open(arg_v[1], O_RDONLY);
	if(f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_v[1]);
		exit(98);
	}

	fi = open(arg_v[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fi == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg_v[2]);
		exit(99);
	}

	while ((ln = read(f, buff, 1024)) > 0)
		if (write(fi, buff, ln) != ln)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg_v[2]);
			exit(99);
		}

	if (ln == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_v[1]);
		exit(98);
	}

	f = close(f);
	fi = close(fi);
	if (f)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}

	return (EXIT_SUCCESS);
}
