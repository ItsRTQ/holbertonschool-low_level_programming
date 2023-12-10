#include "hash_tables.h"
/**
* hash_table_set - adds element to hash table
* @ht: the has table to add to
* @key: is the key to where to add
* @value: is the value for that element
*
* Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL || key == "")
		return (0);
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *new_element, *currentNode;

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	new_element->key = malloc(sizeof(char) * strlen(key));
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = malloc(sizeof(char) * strlen(value));
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	strcpy(new_element->key, key);
	strcpy(new_element->value, value);
	new_element->next = NULL;
	if (ht->array[index] != NULL)
	{
		currentNode = ht->array[index];
		for (; currentNode->next != NULL; currentNode = currentNode->next)
		{
		}
		currentNode->next = new_element;
	}
	else
		ht->array[index] = new_element;
	return (1);
}
