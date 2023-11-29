#include "lists.h"
/**
* add_node - adds a new node to the beggining of th link list
* @head: current head node
* @str: to add to the list
*
* Return: a pointer to the new head of the list, thats the added one
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *newNode;

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
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
