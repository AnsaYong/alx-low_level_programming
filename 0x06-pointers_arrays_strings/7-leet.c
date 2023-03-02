#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded
 *
 * Return: a character array of the encoded string
 */

char *leet(char *str)
{
	int a, b;

	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rep[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0, str[a] != '0\'; a++)
	{
		for (b = 0, let[b] != '\0'; b++)
		{
			if (str[a] == let[b])
			{
				str[a] == rep[b];
			}
		}
	}
	return (str);
}
