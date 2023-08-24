#include "lists.h"

/**
 * list_len - funct prints number of nodes (elems in list)
 * @h: first node pointer of singly linked list
 * Return: number of elems in list (Success),
 * print [0] (nil) if str is NULL
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
