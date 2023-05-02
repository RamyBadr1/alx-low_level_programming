#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 * Return: the data inside the elements which was deleted,
 * || 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (head == NULL || *head == NULL)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}

