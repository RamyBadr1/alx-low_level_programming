#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
