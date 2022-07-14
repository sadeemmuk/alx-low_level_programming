#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - this is a function strcat
 * @dest: first
 * @src: second
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, i = 0;

	while (dest[index++])
		i++;

	for (index = 0; src[index]; i++)
		dest[i++] = src[index];

	return (dest);
}
