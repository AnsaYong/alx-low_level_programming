#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **arr;
	int i = 0, size = 0, count = 0, isWord = 0;

	/* determine the total number of words in str */
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			size++;		/* counting characters */
			isWord = 1;	/* set flag when a non-space char is encountered */
		}
		else if (isWord)
		{
			count++;	/* increment count only if a word is encountered */
			isWord = 0;	/* reset flag if a space is found after a word */
		}
		i++;
	}
	/* increment count by 1 if the last character is a word */
	if (isWord)
		count++;

	/* allocate memory, starting with "rows" followed by columns */
	arr = malloc(sizeof(char *) * (count + 1));
	for (i = 0; i < count; i++)
		arr[i] = malloc(sizeof(char) * 20);

	/* copy words to new allocated memory */


	return (arr);
}
