#include "lists.h"
/**
 *list_len - returns the number of elements in a linked
 *@h: pointer to list
 *Return: elemnts number
 */

size_t list_len(const list_t *h)
{
	int n = 0;
	while (h)
	{
		h = h->next;
		++n;
	}
return (n);
}
