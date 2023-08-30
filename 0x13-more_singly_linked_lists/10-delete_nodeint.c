#include "lists.h"

/**
 * delete_nodeint_at_index - func deletes linked list node index
 * @head: list head
 * @index: list index node address
 * Return: 1 (Succesful), -1 (fail), 0 (NULL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
			prev = prev->next;
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
