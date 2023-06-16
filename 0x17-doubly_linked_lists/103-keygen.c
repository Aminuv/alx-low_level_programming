#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Function  generated the key depending in username.
 * @argc: the number of an arguments
 * @argv: the arguments that pass[ed to the main
 *
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
	unsigned int x, y;
	size_t len, add_;
char *usr = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char pass[] = "      ";

	if (argc != 2)
	{
		printf("pleez Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	pass[0] = usr[(len ^ 59) & 63];
	for (x = 0, add_ = 0; x < len; x++)
		add_ += argv[1][x];
	pass[1] = usr[(add_ ^ 79) & 63];
	for (x = 0, y = 1; x < len; x++)
		y *= argv[1][x];
	pass[2] = usr[(y ^ 85) & 63];
	for (y = argv[1][0], x = 0; x < len; x++)
		if ((char)y <= argv[1][x])
			y = argv[1][x];
	srand(y ^ 14);
	pass[3] = usr[rand() & 63];
	for (y = 0, x = 0; x < len; x++)
		y += argv[1][x] * argv[1][x];
	pass[4] = usr[(y ^ 239) & 63];
	for (y = 0, x = 0; (char) x < argv[1][0]; x++)
		y = rand();
	pass[5] = usr[(y ^ 229) & 63];
	printf("%s\n", pass);
	return (0);
}
