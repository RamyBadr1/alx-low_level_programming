#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end of list
 * @head: Pointer to head
 * @n: data
 * Return: pointer to end node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_dir;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last_dir = *head;

	while (last_dir->next)
		last_dir = last_dir->next;

	last_dir->next = new;
	new->prev = last_dir;

	return (new);
}
