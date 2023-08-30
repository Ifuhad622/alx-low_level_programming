#include "lists.h"

/**
 * find_listint_loop - func locates loop in linked list
 * @head: list head
 * Return: loop init address node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev;
	listint_t *p2;

	prev = head;
	p2 = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = prev;
			prev = p2;
			while (1)
			{
				p2 = prev;
				while (p2->next != head && p2->next != prev)
					p2 = p2->next;
				if (p2->next == head)
				{
					break;
				}

				head = head->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}
