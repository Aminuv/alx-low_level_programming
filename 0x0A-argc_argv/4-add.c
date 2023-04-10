#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - The program that adds positive numbers.
 * Description: adds 2 positive numbers
 * @argc: The arguement
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num, i, j;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[j][i] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
