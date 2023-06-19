#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 *
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
