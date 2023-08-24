#include "lists.h"

/**
 * print_list - print func for all list_t list elements
 * @h: first node pointer of singly linked list
 * Return: number of nodes in str,
 * print [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nelem++;
	}
	return (nelem);
}
