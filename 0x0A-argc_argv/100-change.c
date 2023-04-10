#include <stdio.h>
#include <stdlib.h>

/**
 * main - program make a change of  an amount of money from coins
 * Description: prints number of coins to make it change
 * @argc: arguement
 * @argv: argument of array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
	{
	int cent, i, num, mony;
	int coin[5] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	num = 0;

	for (i = 0; i < 5; i++)
	{
		mony = cent / coin[i];
		num += mony;
		cent -= mony * coin[i];
	}
	printf("%d\n", num);
	return (0);
}
