#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delets the node at a givn position
 * @head: A pointer to the pointer to the head node
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success, or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
