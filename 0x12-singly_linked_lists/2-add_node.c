#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nobe - adds a new nobe at the begining of the list
 * @head: pointer to the head of th list
 * @str: string to be added to the list
 *
 * Return: The address of the element, or NULL if it failed
 */

list_t *add_nobe(list_t **head, const char *str)
{
	list_t *new_nobe;

	if (str == NULL)
		return (NULL);

	new_nobe = malloc(sizeof(list_t));
	if (new_nobe == NULL)
	{
		return (NULL);
	}

	new_nobe->str = strdup(str);
	if (new_nobe->str == NULL)
	{
		free(new_nobe);
		return (NULL);
	}


	new_nobe->len = strlen(str);
	new_nobe->next = *head;
	*head = new_nobe;

	return (new_nobe);
}
