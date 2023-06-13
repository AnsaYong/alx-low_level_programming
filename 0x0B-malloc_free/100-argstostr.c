#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenate;
	int i, j, k;
	int len[6000];	/* an array to store the len of each argument */
	int size = 0;	/* int var to store size of memory required */

	if (ac == 0 || av == NULL)
		return (NULL);

	/* store lenghts of all arguments in an array */
	i = 0;
	while (i < ac)
	{
		len[i] = strlen(av[i]);
		size += len[i];
		i++;
	}

	/* allocate memory for new string */
	concatenate = malloc(sizeof(char) * (size + ac + 1));
	if (concatenate == NULL)
		return (NULL);

	/* concatenate arguments */
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < len[i])
		{
			concatenate[k++] = av[i][j];
			j++;
		}
		concatenate[k++] = '\n';
		i++;
	}
	concatenate[k] = '\0';

	return (concatenate);
}
