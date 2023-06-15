#include "lists.h"

/**
 * add_dnodeint - add node to beggining
 * @head: double pointer to head
 * @n: data integer
 * Return: new pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
