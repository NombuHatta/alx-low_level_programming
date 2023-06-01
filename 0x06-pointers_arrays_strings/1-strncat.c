#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: the bytes
 *
 * Return: pointer to the resulting sting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}

	dest[dest_len] = '\0';

	return (dest);
}
