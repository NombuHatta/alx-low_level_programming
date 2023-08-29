#include "lists.h"
#include "stdlib.h"

/**
 * pop_listint - Delets the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head node
 *
 * Return: The head node's data, or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head && *head)
	{
		temp = *head;
		data = temp->n;
		*head = temp->next;
		free(temp);
	}

	return (data);
}
