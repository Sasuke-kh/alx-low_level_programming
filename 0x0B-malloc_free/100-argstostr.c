#include "main.h"
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	char *str;
	int total_length = 0;
	int i, j;
	int str_index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[str_index] = av[i][j];
			str_index++;
		}
		str[str_index] = '\n';
		str_index++;
	}
	str[str_index] = '\0';

	return (str);
}
