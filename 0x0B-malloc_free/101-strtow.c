#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in the input string
 * @str: The string
 *
 * Return: Counted words
 */
int count_words(char *str)
{
	int count = 0;
	int word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (word)
			{
				word = 0;
			}
		}
		else
		{
			if (!word)
			{
				word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}


/**
 * strtow - Splits a string into words
 * @str: the string
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int num_words, word_idx = 0, in_word = 0;
	char *word_start = NULL, **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
				*str = '\0';
				words[word_idx] = word_start;
				word_idx++;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				word_start = str;
			}
		}
		str++;
	}
	if (in_word)
		words[word_idx] = word_start;
	words[num_words] = NULL;
	return (words);
}
