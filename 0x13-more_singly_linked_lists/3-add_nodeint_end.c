#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: pointer to head
 * @n: value of node
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!*head || !new_node)
		return (NULL);
	new_node->next = head;
	new_node->n = n;
	if (!head)
	{
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);

}
