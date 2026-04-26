#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds or updates a key/value pair in the hash table
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value associated with key (must be duplicated)
 *
 * Return: 1 if success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *tmp;
	char *value_copy, *key_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);

			free(tmp->value);
			tmp->value = value_copy;

			return (1);
		}
		tmp = tmp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(node);
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		free(node);
		return (0);
	}

	node->key = key_copy;
	node->value = value_copy;

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
