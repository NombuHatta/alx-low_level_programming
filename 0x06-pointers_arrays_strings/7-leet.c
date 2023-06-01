#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j / 2];
				break;
			}
		}
	}

	return (str);
}
