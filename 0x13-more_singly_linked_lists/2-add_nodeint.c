#include "lists.h"

/**
 * add_nodeint - func adds new new init node in linked list
 * @head: list head
 * @n: n elem
 * Return: new elem address (Success), fail (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
