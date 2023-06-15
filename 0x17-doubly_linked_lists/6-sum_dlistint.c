#include "lists.h"
/**
 * sum_dlistint - Sum of nodes data
 * @head: Pointer to first nod
 * Return: the sum result
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}
