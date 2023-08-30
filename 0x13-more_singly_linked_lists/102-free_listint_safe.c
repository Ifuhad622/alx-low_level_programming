#include "lists.h"

/**
 * free_listint_safe - func frees linked
 * @h: list head
 * Return: size of freed list (Succeess), fail (NULL)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes_num = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
		{
			exit(98);
		}

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodes_num);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodes_num++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nodes_num);
}

/**
 * free_listp2 - func frees linked list
 * @head: list head
 * Return: void
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
