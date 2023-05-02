#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a certain index
 * @head: first node
 * @index: index of the node
 * Return: pointer to the node || NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *temp = head;

	while (temp)
	{
		if (i < (int)index)
		{
			temp = temp->next;
			i++;
		}
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}

