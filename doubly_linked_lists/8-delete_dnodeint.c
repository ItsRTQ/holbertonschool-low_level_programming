#include "lists.h"
/**
* delete_dnodeint_at_index - delete elemtent at index
* @head: recive link list head
* @index: position to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int where = 0;
	dlistint_t *currentNode = *head;

	if (currentNode == NULL)
		return (-1);
	while (currentNode->next != NULL)
	{
		if (index != where)
		{
			currentNode = currentNode->next;
			where++;
		}
		else
			break;
	}
	if (index > where)
	{
		return (-1);
	}
	if (currentNode->next == NULL && currentNode->prev == NULL)
	{
		free(currentNode);
		*head = NULL;
		return (1);
	}
	else if (currentNode->prev == NULL)
	{
		currentNode->next->prev = NULL;
		*head = currentNode->next;
	}
	else if (currentNode->next == NULL)
		currentNode->prev->next = NULL;
	else
	{
		currentNode->prev->next = currentNode->next;
		currentNode->next->prev = currentNode->prev;
	}
	free(currentNode);
	currentNode = NULL;
	return (1);
}
