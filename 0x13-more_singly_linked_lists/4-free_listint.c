#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
