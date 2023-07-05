#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
