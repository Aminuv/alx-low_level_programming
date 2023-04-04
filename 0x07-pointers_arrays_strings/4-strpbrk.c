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
		int q;

		while (s[q] != '\0')
		{
			for (q = 0; accept[q]; q++)
			{
			if (*s == accept[q])
			return (*s + q);
			}
		s++;
		}

	return ('\0');
}
