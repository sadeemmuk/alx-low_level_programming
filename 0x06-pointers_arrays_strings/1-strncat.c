#include "main.h"
#include <string.h>

/**
 * _strncat - function to append new char
 * @src: first param
 * @dest: second param
 * @n: third param
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
