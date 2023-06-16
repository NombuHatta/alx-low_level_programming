#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to second string
 * @n: Number of bytes
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate;
	unsigned int i, j;
	unsigned int len1, len2, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	total_len = len1 + len2;

	concatenate = malloc((total_len + 2) * sizeof(char));
	if (concatenate == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenate[i] = s1[i];

	j = 0;
	while (j < n && s2[j] != '\0')
	{
		concatenate[i] = s2[j];
		i++;
		j++;
	}

	concatenate[i] = '\0';

	return (concatenate);
}
