#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
* @ht: the hash table
* Return: deleted hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal, *next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
		for (temporal = ht->array[index]; temporal; temporal = next)
		{
			next = temporal->next;
			free(temporal->key);
			free(temporal->value);
			free(temporal);
		}
	free(ht->array);
	free(ht);
}
