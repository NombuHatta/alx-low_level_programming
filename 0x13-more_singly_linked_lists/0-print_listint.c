#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
