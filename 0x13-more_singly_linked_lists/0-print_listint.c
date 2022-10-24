#include "lists.h"
#include <stdio.h>

/**
 * print_listint -> Prints all elements
 * @h: A pointer to the head of the list
 *
 * Return: Number of Nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

