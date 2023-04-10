#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * Description: prints all command line arguements
 * @argc: the arguements
 * @argv: the array of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
