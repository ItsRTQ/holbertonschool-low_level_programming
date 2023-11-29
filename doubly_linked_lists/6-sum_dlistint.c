#include "lists.h"
/**
* sum_dlistint - sums all elements value
* @head: head of the list
*
* Return: the total of the addition from all elements
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;
	int total = 0;

	for (; currentNode != NULL; currentNode = currentNode->next)
	{
		total = total + currentNode->n;
	}
	return (total);
}
