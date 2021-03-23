#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes head node and returns the head integer.
 * @head: Double pointer to the actual position of the linked list
 *
 * Return: node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int valor;

	if (*head == NULL)
		return (0);

	ptr = *head;
	valor = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;

	return (valor);
}
