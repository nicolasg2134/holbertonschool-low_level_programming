#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print list node
 * @h: Head node to list
 *
 * Return: Size of the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int recorre = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		recorre++;
	}

	return (recorre);
}