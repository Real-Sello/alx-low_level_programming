#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key
* @ht: hash table
* @key: key to get
* Return: element associated value, NULL at fail
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temporal = NULL;

	if (!key)
		return (NULL);

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		temporal = ht->array[index];
		while (temporal)
		{
			if (strcmp(temporal->key, key) == 0)
				return (temporal->value);
			temporal = temporal->next;
		}
	}
	return (NULL);
}
