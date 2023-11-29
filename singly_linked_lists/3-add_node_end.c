#include "lists.h"
/**
* add_node_end - adds a new node to the tail of the list
* @head: recive head node
* @str: to add in this new node
*
* Return: a pointer to the head of the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *newNode, *currentNode = *head;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		newNode->str = strdup(str);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
		size = strlen(newNode->str);
	}
	else
	{
		newNode->str = "";
	}
	newNode->len = size;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	for (; currentNode->next != NULL; currentNode = currentNode->next)
	{
	}
	currentNode->next = newNode;
	return (*head);
}
