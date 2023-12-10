#include "hash_tables.h"
/**
* hash_table_get - retieves the value of said key
* @ht: table to look into
* @key: key to search for the value
*
* Return: the value of said key or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currEle;
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	currEle = ht->array[index];
	while (currEle != NULL)
	{
		if (strcmp(currEle->key, key) == 0)
		{
			return (currEle->value);
		}
		currEle = currEle->next;
	}
	return (NULL);
}
