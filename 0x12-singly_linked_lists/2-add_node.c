#include "lists.h"

/**
 * add_node - func adds new node to list_t list at init address
 * @head: first list_t elems
 * @str: node data string
 * Return: address of new elem (Success), fails (NULL)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	int length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * _strlen - func prints string length
 * @s: input string
 * Return: string length (Success), fail (NULL)
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
