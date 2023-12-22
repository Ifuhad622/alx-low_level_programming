#include "hash_tables.h"

/**
 * hash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx];
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;
	if (!node)
	{
		return (NULL);
	}
	else
	{
		return (node->value);
	}
}
