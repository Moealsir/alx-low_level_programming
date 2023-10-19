#include "lists.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: integer length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);

}

/**
 * print_list - prints a linked lists
 * @h: pointer to head
 * Return: i
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

		while (h)
		{
			printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(null)");
			h = h->next;
			i++;
		}
	return (i);

}
