#include "lists.h"
/**
* free_dlistint - frees a doubly link list dlistint_t
* @head: head of list
*
* Return: void, doesnt return
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head, *previewsNode = NULL;

	while (currentNode != NULL)
	{
		previewsNode = currentNode;
		currentNode = currentNode->next;
		free(previewsNode);
	}
}
