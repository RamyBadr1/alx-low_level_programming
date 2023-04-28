#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees allocated memory
 * @head: list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}

