#include "lists.h"

/**
 * get_nodeint_at_index - func prints nth node pointer on linked list
 * @head: list head
 * @index: node index
 * Return: nth node pointer (Success), node does not exist (NULL)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head != NULL; i++)
		head =  head->next;

	return (head);
}
