#include <stdlib.h>
#include <string.h>

int count_words(char *str);
char *get_next_word(char **str_ptr);

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i;

	if (str == NULL || *str == '\0')
		return NULL;

	word_count = count_words(str);
	if (word_count == 0)
		return NULL;

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	for (i = 0; i < word_count; i++)
	{
		words[i] = get_next_word(&str);
		if (words[i] == NULL)
		{
			/* Free memory for previously allocated words */
			while (i > 0)
			{
				i--;
				free(words[i]);
			}
			free(words);
			return NULL;
		}
	}

	words[word_count] = NULL;

	return words;
}

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return count;
}

/**
 * get_next_word - Retrieves the next word from a string
 * @str_ptr: Pointer to the current position in the string
 *
 * Return: Pointer to the next word, or NULL if no more words
 */
char *get_next_word(char **str_ptr)
{
	char *word;
	char *start = *str_ptr;
	char *end;
	int word_length;

	while (**str_ptr == ' ' || **str_ptr == '\t' || **str_ptr == '\n')
		(*str_ptr)++;

	if (**str_ptr == '\0')
		return NULL;

	end = *str_ptr;
	while (*end != ' ' && *end != '\t' && *end != '\n' && *end != '\0')
		end++;

	word_length = end - start;
	word = malloc((word_length + 1) * sizeof(char));
	if (word == NULL)
		return NULL;

	strncpy(word, start, word_length);
	word[word_length] = '\0';

	*str_ptr = end;

	return word;
}
