#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: input
 * @accept: input
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
		int q = 0;

		while (s[q] != '\0')
		{
			for (q = 0; accept[q]; q++)
			{
			if (s[q] == accept[q])
			return (s);
			}
		s++;
		}

	return ('\0');
}
