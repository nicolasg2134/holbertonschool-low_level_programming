#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -frees a list_t list.
 * @head: Double pointer to the actual position.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo_actual;
	listint_t *nodo_siguiente;

	nodo_actual = *head;

	while (nodo_actual != NULL)
	{
		*nodo_siguiente = nodo_actual->next;
		nodo_actual->next = NULL;
		free(nodo_actual);
		nodo_actual = nodo_siguiente;
	}
	*head = NULL;

}
