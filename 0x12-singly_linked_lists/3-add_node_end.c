#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: A pointer to the pointer to the head of the list
 * @str: The string to be duplicated and add to the list
 *
 * Return: The address of the new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	char *new_str;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
