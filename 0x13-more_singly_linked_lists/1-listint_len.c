#include "lists.h"

/**
 * listint_len - The function that returns the number of elements in a linked listint_t.
 * @h: The head node.
 *
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{
    size_t cnt = 0;

    while (h != NULL)
    {
        cnt++;
        h = h->next;
    }
    return (cnt);
}
