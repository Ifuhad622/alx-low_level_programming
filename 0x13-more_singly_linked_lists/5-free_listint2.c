#include "lists.h"

/**
 * free_listint2 - func frees linked list from memory
 * @head: list head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr_h;

	if (head != NULL)
	{
		curr_h = *head;

		while ((temp = curr_h) != NULL)
		{
			curr_h = curr_h->next;
			free(temp);
		}
		*head = NULL;
	}
}
