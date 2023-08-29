#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int num = h->n, digits = 0, temp = num, divis = 1;
	int i;

	while (h != NULL)
	{
		while (temp != 0)
		{
			temp /= 10;
			digits++;
		}

		if (num < 0)
		{
			printf("-");
			num = -num;
		}
		while (digits > 0)
		{
			for (i = 1; i < digits; i++)
			{
				divis *= 10;
			}
			printf("%c", num / divis + '0');
			num %= divis;
			digits--;
			count++;
		}

		h = h->next;

		if (h != NULL)
			printf(" ");
	}
	printf("\n");

	return (count);
}
