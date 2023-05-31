#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
	char *src_ptr = src;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src_ptr != '\0')
	{
		*dest_end = *src_ptr;
		dest_end++;
		src_ptr++;
	}
	*dest_end = '\0';

	return (dest);
}
