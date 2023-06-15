#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * @head: address of the list begining
 * @index: index of the node to be deleted
 * Return: 1 || -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *oldNode;
	unsigned int i;

	if (!head || *head == NULL)
		return (-1);

	if (index == 0)
	{
		oldNode = *head;
		*head = oldNode->next;

		if (*head)
			(*head)->prev = NULL;
		free(oldNode);
		return (1);
	}

	oldNode = *head;

	for (i = 0; oldNode && i < index; i++)
		oldNode = oldNode->next;
	if (!oldNode)
		return (-1);
	oldNode->prev->next = oldNode->next;

	if (oldNode->next)
		oldNode->next->prev = oldNode->prev;
	free(oldNode);
	return (1);
}
