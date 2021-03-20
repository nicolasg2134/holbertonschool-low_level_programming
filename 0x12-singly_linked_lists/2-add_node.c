#include <string.h>
#include "lists.h"
/**
*add_node - add new to beggining of list pointed to by 'head'
*@head: pointer to start of list
*@str: string to initialize node with
*Return: address of new element, or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t n = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	if (new->str)
		while (new->str[n])
			++n;
	new->len = n;
	*head = new;
	return (new);
}