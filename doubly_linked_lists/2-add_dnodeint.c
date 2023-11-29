#include "lists.h"
/**
* add_dnodeint - adds a node to the beginning of the list
* @head: head of list
* @n: value to add
*
* Return: pointer to the newly modify link list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
		newNode->next->prev = *head;
	*head = newNode;
	return (*head);
}
