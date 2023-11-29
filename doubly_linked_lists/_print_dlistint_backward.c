#include "lists.h"
/**
* print_dlistint_backward - prints a doubly list from tail to head
* @h: tail of the list
*
* Return: amount of elements
*/
size_t _print_dlistint_backward(const dlistint_t *h)
{
	size_t ele = 0;
	const dlistint_t *currentNode = h;

	for (;currentNode->next != NULL; currentNode = currentNode->next)
	{
	}
	for (; currentNode != NULL; currentNode = currentNode->prev)
	{
		printf("%d\n", currentNode->n);
		ele++;
	}
	return (ele);
}
