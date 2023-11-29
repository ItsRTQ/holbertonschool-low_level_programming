#include "lists.h"
/**
* list_len - checks how many elements are in a link list
* @h: head of link list
*
* Return: size_t that the amount of elements
*/
size_t list_len(const list_t *h)
{
	size_t amount = 0;
	const list_t *currentNode = h;

	for (; currentNode != NULL; currentNode = currentNode->next)
	{
		amount++;
	}
	return (amount);
}
