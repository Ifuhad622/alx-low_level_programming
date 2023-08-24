#include "lists.h"

/**
 * free_list - func frees list_t list address
 * @head: first list_t elems
 * Return: void (Success), fails (NULL)
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
