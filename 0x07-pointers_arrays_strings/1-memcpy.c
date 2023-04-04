#include "main.h"
/**
 *_memcpy - the function that copies the memory area
 *@dest: the memory area
 *@src: memory where is copied
 *@n: the number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for ( ; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
