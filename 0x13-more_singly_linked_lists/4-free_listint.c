#include "lists.h"

/**
 * free_listint - func frees linked list from memory
 * @head: list head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
