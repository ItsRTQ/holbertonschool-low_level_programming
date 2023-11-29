#include "lists.h"
/**
* dlistint_len - counts the elements of the list
* @h: recive head of the doubly list
*
* Return: returns the amount of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t ele = 0;
	const dlistint_t *currentNode = h;

	for (; currentNode != NULL; currentNode = currentNode->next)
	{
		ele++;
	}
	return (ele);
}
