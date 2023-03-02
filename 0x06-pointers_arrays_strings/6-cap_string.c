#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be captalized
 *
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int a, b;

	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',\
		'"', '(', ')', '{', '}'};

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; sep[b] != '\0'; b++)
		{
			if (str[a] == sep[b] && (str[a + 1] >= 97 && str[a + 1] <= 122))
			{
				str[a + 1] -= 32;
			}
		}
	}
	return (str);
}
