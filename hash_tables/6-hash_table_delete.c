#include "hash_tables.h"
/**
* hash_table_delete - deletes said hash table
* @ht: recive hash table to delete
*
* Return: void, doesnt return
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *preview;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		preview = NULL;
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current)
			{
				preview = current;
				current = current->next;
				free(preview->value);
				free(preview->key);
				free(preview);
			}
		}
	}
	free(ht->array);
	free(ht);
}
