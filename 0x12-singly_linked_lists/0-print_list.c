#include <stdio.h>
#include "lists.h"

/**
 *print_list - print string list
 *@h: pointer to first element of list
 *Return: n length of list
 */

size_t print_list(const list_t *h)
{
       int n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%i] %s\n", h->len, h->str);
}
		h = h->next;
		++n;
	}
	return (n);
}
