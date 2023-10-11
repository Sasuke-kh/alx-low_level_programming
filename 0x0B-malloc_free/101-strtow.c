#include <stdlib.h>
#include <string.h>

int count_words(char *str);
char **free_words(char **words, int count);
char *extract_word(char **str_ptr);

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
		words[i] = extract_word(&str);
		if (words[i] == NULL)
			return free_words(words, i);
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
 * free_words - Frees the memory allocated for words
 * @words: The array of words
 * @count: Number of words in the array
 *
 * Return: Always returns NULL
 */
char **free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);

	return NULL;
}

/**
 * extract_word - Extracts the next word from a string
 * @str_ptr: Pointer to the current position in the string
 *
 * Return: Pointer to the extracted word, or NULL if no more words
 */
char *extract_word(char **str_ptr)
{
	char *word;
	char *start = *str_ptr;
	char *end;

	while (*start == ' ' || *start == '\t' || *start == '\n')
		start++;

	if (*start == '\0')
		return NULL;

	end = start;
	while (*end != ' ' && *end != '\t' && *end != '\n' && *end != '\0')
		end++;

	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return NULL;

	strncpy(word, start, end - start);
	word[end - start] = '\0';

	*str_ptr = end;

	return word;
}
