#include "hash_tables.h"
/**
 * hash_table_create - creates a hashtable with set size
 * @size: receve amount for size of array
 *
 * Return: pointer to hash table;
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *table;

	if (size < 1)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	/*initialize with NUll to avoid indefine behavior*/
	for (count = 0; count < size; count++)
	{
		table->array[count] = NULL
	}
	return (table);
}
