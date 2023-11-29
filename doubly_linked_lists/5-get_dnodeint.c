#include "lists.h"
/**
* get_dnodeint_at_index - returns a pointer to the node in index
* @head: doubly link list
* @index: where to search
*
* Return: a pointer to the desired element based on index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode = head;
	unsigned int where = 0;

	while (currentNode != NULL)
	{
		if (where != index)
			currentNode = currentNode->next;
		else
			break;
		where++;
	}
	return (currentNode);
}
