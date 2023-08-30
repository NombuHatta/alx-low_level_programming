#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: Pointer to the sting
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - Copies the contents of one string to the other
 * @dest: the destination
 * @src: the source
 *
 * Return: The copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - concatenate two strings
 * @dest: The destintion
 * @src: the source
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[dest_len + 1] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * argstostr - Concatenstes all arguments
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to the concatenated string, or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int total = 0, i, j;
	char *concate_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total += _strlen(av[i]) + 1;
	}

	concate_str = (char *)malloc(sizeof(char) * total);
	if (concate_str == NULL)
	{
		return (NULL);
	}
	concate_str[0] = '\0';

	for (j = 0; j < ac; j++)
	{
		_strcat(concate_str, av[j]);
		if (j != ac - 1)
		{
			_strcat(concate_str, "\n");
		}
	}
	return (concate_str);
}
