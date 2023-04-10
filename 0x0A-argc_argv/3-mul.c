#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply 2 numbers and give result
 * @argc: The arguement
 * @argv: arguement of array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
