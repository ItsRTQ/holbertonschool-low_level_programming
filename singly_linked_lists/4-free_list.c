#include "lists.h"
/**
* free_list - frees link list of list_t
* @head: recive the head node of the list
*
* Return: void, doesnt return
*/
void free_list(list_t *head)
{
	list_t *currentNode = head, *previewsNode = NULL;

	while (currentNode != NULL)
	{
		previewsNode = currentNode;
		currentNode = currentNode->next;
		free(previewsNode->str);
		free(previewsNode);
	}
}
