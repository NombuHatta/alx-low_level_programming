#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - Compares the sum of all data in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all data
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
