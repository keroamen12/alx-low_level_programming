#include "lists.h"

/**
 * list_len - determine the lenght.
 * @h: name of the list
 * Return: the size of list.
 */
size_t list_len(const list_t *h)
{
	int r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}
	return (r);
}
