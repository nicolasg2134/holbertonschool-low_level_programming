#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list.
 * @head: Pointer to the actual position of the linked list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *nodo_actual;
	listint_t *nodo_siguiente;

	nodo_actual = head;

	while (nodo_actual != NULL)
	{
		nodo_siguiente = nodo_actual->next;
		free(nodo_actual);
		nodo_actual = nodo_siguiente;
	}
}
