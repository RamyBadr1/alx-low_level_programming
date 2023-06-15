#include "lists.h"

/**
 * print_dlistint - function to print all the least nodes and return number of nodes
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
