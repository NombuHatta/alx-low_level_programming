#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL onn failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[len1 + j] = s2[j];

	concat_str[len1 + len2] = '\0';

	return (concat_str);
}
