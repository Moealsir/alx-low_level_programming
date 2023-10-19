#include "lists.h"

/**
 * free_list - free all nodes
 * @head: pointer to head
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *node, *next;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
