#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}

