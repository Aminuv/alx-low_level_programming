#include "lists.h"

/**
 * _strlen - the return of the string
 *@s: length to checker
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - print the list
 * @h: the  head of the list
 * return: int
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
	h = h->next;
	i++;
	}
	return (i);
}
