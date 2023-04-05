#include "main.h"
/**
 * _strlen_recursion - The function that returns the length of a string.
 * @s: output.
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int lgt = 0;

	if (*s)
	{
		lgt += _strlen_recursion(s + 1);
		 lgt++;
	}

	return (lgt);
}
