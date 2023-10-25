#include "lists.h"

/**
 * free_listint2 - free a list of ints
 * @head: addres of pointer of first node
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;
	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
