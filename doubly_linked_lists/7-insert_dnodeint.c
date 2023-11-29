#include "lists.h"
#include "1-dlistint_len.c"
/**
* insert_dnodeint_at_index - insert new element at given index
* @h: recive list
* @idx: where to insert element
* @n: value of element
*
* Return: ptr to newly modify list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int where = 0, lenght = dlistint_len(*h);
	dlistint_t *currentNode = *h, *newNode;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	else if (idx == lenght)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	else if (idx > lenght)
		return (NULL);
	while (currentNode != NULL)
	{
		if (where != idx)
			currentNode = currentNode->next;
		else
			break;
		where++;
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = currentNode->prev;
	newNode->next = currentNode;
	currentNode->prev->next = newNode;
	currentNode->prev = newNode;
	return (newNode);
}
