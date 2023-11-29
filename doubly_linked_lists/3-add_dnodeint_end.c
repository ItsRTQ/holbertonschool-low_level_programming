#include "lists.h"
/**
* add_dnodeint_end - adds a node to the tail of the list
* @head: head oof list
* @n: value to add
*
* Return: ptr to modify list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *currentNode = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->next = NULL;
	newNode->n = n;
	if (*head != NULL)
	{
		for (; currentNode->next != NULL; currentNode = currentNode->next)
		{
		}
		newNode->prev = currentNode;
		currentNode->next = newNode;
	}
	else
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	return (*head);
}
