#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string array to encode
 *
 * Return: the encoded string array, str
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			if ((str[i] >= 97 && str[i] <= 109) || (str[i] >= 65 && str[i] <= 77))
			{
				str[i] += 13;
				break;
			}

			str[i] -= 13;
			break;
		}

		i++;
	}

	return (str);
}
