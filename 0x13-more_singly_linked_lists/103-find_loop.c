#include "lists.h"

/**
 * find_listint_loop - find the loop of a linked list
 * @head: linked list
 *
 * Return: address of node, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p_node, *end_node;

	if (head == NULL)
		return (NULL);

	for (end_node = head->next; end_node != NULL; end_node = end_node->next)
	{
		if (end_node == end_node->next)
			return (end_node);
		for (p_node = head; p_node != end_node; p_node = p_node->next)
			
			if (p_node == end_node->next)
		return (end_node->next);
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
	listint_t *next, *loop_n;
	size_t l;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);

	 loop_n = find_listint_loop(*h);
	for (l = 0; (*h != loop_n || loop_n) && *h != NULL; *h = next)
	{
		l++;
	next = (*h)->next;
	if (*h == loop_n && i)
	{
		if (loop_n == loop_n->next)
		{
			free(*h);
			break;
		}
		l++;
		next = next->next;
		free((*h)->next);
		loop_n = 0;
	} 
	free(*h);
	}
	*h = NULL;
	return (l);
}
