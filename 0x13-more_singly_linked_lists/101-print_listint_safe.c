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

	new_l = malloc(size * sizeof(listint_t *));
	if (new_l == NULL)
	{
		free(l);
		exit(98);
	}
	while (i < size - 1)
	{
		new_l[i] = l[i];
		i++;
	}
	new_l[i] = newnd;
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
	const listint_t **l = NULL;
	size_t i, j;

	j = 0;

	if (head != NULL)
	{
	for (i = 0; i < j; i++)
	{
		if (head == l[i])
		{
			printf("-> [%p] %d\n", (void *)head, head->j);
			free(l);
			return (j);
		}
	}
	}
	j++;
	
	l = mem(l, j, head);
	printf("[%p] %d\n", (void *)head, head->j);
	head = head->next;

	free(l);
	return (j);
}
