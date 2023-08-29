#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - Frees a listint_t and sets the head to NULL
 * @head: Pointer to the pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}
