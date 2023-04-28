#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: double pointer to the list
 * @str: string
 * Return: address of the new element || NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(size_t));
	list_t *temp = *head;
	int len = 0;

	while (str[len])
		len++;

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}

