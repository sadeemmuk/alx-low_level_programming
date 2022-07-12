#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: string pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
