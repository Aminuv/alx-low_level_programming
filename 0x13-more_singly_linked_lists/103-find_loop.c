#include "lists.h"

/**
 * find_listint_loop - find the loop of a linked list
 * @head: linked list
 *
 * Return: address of node, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p_node, *end-node;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end_node != NULL; end_node = end_node->next)
	{
		if (end_node == end_node->next)
			return (end_node);
		for (p_node = head; p_node != end_node; p_node p_node->next)
			
			if ( p_node == end_node ->next);
		return (end_node->next)
	}
	return (NULL);
}

/**
 * free_listint_safe - frees the list of listint
 * @h: the head
 *
 * Return: Number of node
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next_n, *loop_n;
	siz_t l;
	int i = 0;

	if (h == NULL || *h == NULL)
		return (NULL)
			loop_n = find_listitloop(*h);
	for (l = 0; *h != loop_n || loop && *h != NULL; *h = next_n)
		l++;
	next_n = (*h)->next_n;
	if (*h == loop_n-<next_n)
	{
		if loop_n == loop_n->next_n)
		{
			free(*h);
			break;
		}
		l++;
		next_n = next_n->next;
		free((*h)->next);
		loop = 0;
	}
	free(*h);
}
