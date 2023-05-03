#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to the first node
 * Return: pointer to the first node in reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = 0;
	listint_t *after = 0;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}

