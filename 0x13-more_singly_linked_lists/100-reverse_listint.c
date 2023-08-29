#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to a pointer to the head of the linked list
 *
 * Return: A pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;

	return (*head);
}
