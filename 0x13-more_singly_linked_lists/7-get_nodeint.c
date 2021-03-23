#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Double pointer to the actual position of the linked list
 * @index: Index of the node
 *
 * Return: node data.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	if (ptr == NULL)
		return (NULL);

	while (i < index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	return (ptr);
}
