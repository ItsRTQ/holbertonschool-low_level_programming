#include "lists.h"
/**
* print_dlistint - prints a doubly list
* @h: head of the list
*
* Return: amount of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t ele = 0;
	const dlistint_t *currentNode = h;

	for (; currentNode != NULL; currentNode = currentNode->next)
	{
		printf("%d\n", currentNode->n);
		ele++;
	}
	return (ele);
}
