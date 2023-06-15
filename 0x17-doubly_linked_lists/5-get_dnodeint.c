#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: pointer to first node
 * @index: index
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
