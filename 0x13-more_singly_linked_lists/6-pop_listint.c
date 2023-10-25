#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @node: addrees of pointer
 * Return: valie
*/

int pop_listint(listint_t **head)
{
	listint_t *node;

	int n;
		if (!head || *head)
		return (0);

	node = (*head)->next;
	n = node->n;
	*head = node;
	return (n);
}
