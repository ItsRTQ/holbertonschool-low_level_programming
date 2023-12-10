#include "hash_tables.h"
/**
* key_index - gives a index of a key
* @key: recive to search table
* @size: size of the table thats been search
*
* Return: the index where the key is at
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
