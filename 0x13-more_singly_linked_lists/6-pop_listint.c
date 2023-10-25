#include "lists.h"

/***/

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
