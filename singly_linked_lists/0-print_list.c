#include "lists.h"
/**
* print_list - prints a link list value
* @h: head of the list
*
* Return: size_t that the amount of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *currentNode = h;

	for (; currentNode != NULL; currentNode = currentNode->next)
	{
		printf("[%u] ", (currentNode->str == NULL) ? 0 : currentNode->len);
		printf("%s\n", (currentNode->str == NULL) ? "(nil)" : currentNode->str);
		i++;
	}
	return (i);
}
