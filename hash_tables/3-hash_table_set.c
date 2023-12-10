#include "hash_tables.h"
int scan(hash_table_t *ht, const char *k, const char *v, unsigned long int i);
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
	unsigned long int index;
	hash_node_t *new_element;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (scan(ht, key, value, index))
		return (1);
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
		new_element->next = ht->array[index];
		ht->array[index] = new_element;
	}
	else
		ht->array[index] = new_element;
	return (1);
}
/**
 * scan - change only the value if element exist
 * @ht: table to check
 * @k: key to do comparation
 * @v: to change the value
 * @i: index to verify
 *
 * Return: 0 if doesnt exist 1 if it does
 */
int scan(hash_table_t *ht, const char *k, const char *v, unsigned long int i)
{
	hash_node_t *currentNode = ht->array[i];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, k) == 0)
		{
			strcpy(currentNode->value, v);
			return (1);
		}
		currentNode = currentNode->next;
	}
	return (0);
}
