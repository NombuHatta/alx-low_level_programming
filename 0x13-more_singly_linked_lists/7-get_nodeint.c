#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the nth node of a lined list
 * @head: pointr to the head of the linked list
 * @index: Index of the node to retrieve, starting from 0
 *
 * Return: Pointer to the nth node, NULL if node does not exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	return (current);
}
