#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: pointer to newly allocated space or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	total_len = len1 + len2;

	s = malloc(sizeof(char) * (total_len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[i++] = s2[j];

	s[i] = '\0';

	return (s);
}
