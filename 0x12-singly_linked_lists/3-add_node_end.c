#include "lists.h"

/**
 * add_node_end - func returns new elems (new node) to list_t list
 * @head: first link_t elems
 * @str: node data string
 * Return: address of new elem (Success), fails (NULL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		return (NULL);
	}

	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->str = string;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}

/**
 * _strlen - func pprints string length
 * @s: input string
 * Return: string length (Success), fail (NULL)
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
