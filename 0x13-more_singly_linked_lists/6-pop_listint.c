#include "lists.h"

/**
 * pop_listint - func deletes linked list head node
 * @head: list head
 * Return: empty link list (Success), head node not empty (NULL)
 */
int pop_listint(listint_t **head)
{
	int node_h;
	listint_t *h;
	listint_t *curr_h;

	if (*head == NULL)
	{
		return (0);
	}

	curr_h = *head;

	node_h = curr_h->n;

	h = curr_h->next;

	free(curr_h);

	*head = h;

	return (node_h);
}
