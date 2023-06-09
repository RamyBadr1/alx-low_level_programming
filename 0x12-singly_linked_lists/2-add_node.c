#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning
 * @head: double pointer to the list
 * @str: new string to add in the node
 * Return: the address of the new element ||  NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int len = 0;

	while (str[len])
		len++;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
