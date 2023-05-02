#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data
 * @head: first node
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
