#include "main.h"
/**
 * leet - function that encode a string
 * @str: string
 * Return: returns encode string
 */

char *leet(char *str)
{
	int index = 0, index2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index] == leet[index2] ||
					str[index] - 32 == leet[index2])
				str[index] = index2 + '0';
		}
	}
	return (str);
}
