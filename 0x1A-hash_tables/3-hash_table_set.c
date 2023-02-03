#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table to be added
* @key: key of the element
* @value: key value
* Return: 1 if succeed, 0 at fail
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *temporal_value = NULL;
	hash_node_t *temporal = NULL, *new = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	temporal_value = strdup(value);
	if (!temporal_value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	temporal = ht->array[index];
	while (temporal)
	{
		if (strcmp(temporal->key, key) == 0)
		{
			free(temporal->value);
			temporal->value = temporal_value;
			temporal->value = strdup(value);
			free(temporal_value);
			return (1);
		}
		temporal = temporal->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = temporal_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
