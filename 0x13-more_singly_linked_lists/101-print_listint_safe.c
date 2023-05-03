#include "lists.h"

/**
 * mem - an array of pointers
 * @l: the old list
 * @size: size of the new list
 * @newnd: new node
 *
 * Return: pointer to list
 */

const listint_t **mem(const listint_t **l, size_t size, const listint_t *newnd)
{
	size_t i = 0;
	const listint_t **new_l;

	newl = malloc(size * sizeof(listint_t *));
	if (new_l == NULL)
	{
		free(l);
		exit(98);
	}
	while (i < size - 1)
	{
		newl[i] = l[i];
		i++;
	}
	newl[i] = newnd;
	free(l);
	return (new_l);
}

/**
 * print_listint_safe - print a linked list
 * @head: pointer to the first list
 *
 * Return: the number of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (n);
			}
		}
		n++;
		l = mem(l, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (n);
}
