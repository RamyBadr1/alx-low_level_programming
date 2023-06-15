#include "lists.h"

/**
 * free_dlistint - frees list.
 * @head: a pointer to first node of list
 * Return: Always nothing(void).
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	freed = head;

	while (head != NULL)
	{
		freed = freed->next;
		free(head);
		head = freed;
	}
}
