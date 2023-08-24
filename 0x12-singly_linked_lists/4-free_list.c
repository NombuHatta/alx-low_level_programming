#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - Frees a list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
