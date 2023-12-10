#include "hash_tables.h"
/**
* hash_table_print - prints hash table elements
* @ht: hash table to print
*
* Return: void, doesnt return
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current)
			{
				printf("%s'%s': '%s'", flag ? ", " : "", current->key, current->value);
				current = current->next;
				flag = 1;
			}
		}
	}
	printf("}\n");
}
