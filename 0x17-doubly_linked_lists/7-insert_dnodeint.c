#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: beginning of the list
 * @idx: index
 * @n: data
 * Return: pointer to new node || NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *oldNode;
	unsigned int a;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	oldNode = *h;

	for (a = 0; oldNode && a < idx; a++)
		oldNode = oldNode->next;

	if (oldNode && a == idx)
		return (add_dnodeint_end(h, n));

	else if (!oldNode)
	{
		newNode = malloc(sizeof(dlistint_t));

		if (newNode)
			return (NULL);
		newNode->n = n;
		oldNode->prev->next = newNode;
		newNode->prev = oldNode->prev;
		oldNode->prev = newNode;
		newNode->next = oldNode;

		return (newNode);
	}
	return (NULL);
}
