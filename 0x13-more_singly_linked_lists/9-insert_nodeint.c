#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert
 * Return: pointer to a new node || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *cur = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; cur && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = cur->next;
			cur->next = newNode;
			return (newNode);
		}
		else
			cur = cur->next;
	}

	return (NULL);
}

