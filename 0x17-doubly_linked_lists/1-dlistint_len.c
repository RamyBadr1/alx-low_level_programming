#include "lists.h"
/**
 * dlistint_len - Return number of all nodes
 * @h: Pointer to first node
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
