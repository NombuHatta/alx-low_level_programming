#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Return the number of elements in a linked list
 * @h: Pointer to the head of the linker list
 *
 * Return: The number of elements in the linker list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
