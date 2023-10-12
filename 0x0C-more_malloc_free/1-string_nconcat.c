#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, concat_len = 0;
	char *concatenated_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;

	concatenated_str = malloc((concat_len + 1) * sizeof(char));
	if (concatenated_str == NULL)
		exit(98);

	for (i = 0; i < len1; i++)
		concatenated_str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatenated_str[i] = s2[j];

	concatenated_str[i] = '\0';

	return (concatenated_str);
}
