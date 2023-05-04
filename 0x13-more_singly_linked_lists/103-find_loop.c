#include "lists.h"

/**
 * find_listint_loop - finds loop for the linked 
 * @head: pointer to the first head
 *
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p_node = head;
	listint_t *node = head;

	if (!head)
		return (NULL);

	p_node = node = head;
	while (p_node && node && node->next)
	{
		p_node = p_node->next;
		node = node->next->next;
		if (p_node == node)
		{
			p_node = head;
			break;
		}
	}
	if (!p_node || !node || !node->next)
		return (NULL);
	while (p_node != node)
	{
		p_node = p_node->next;
		node = node->next;
	}
	return (node);
}
