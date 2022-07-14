#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _stract - this is a function stract
 * @dest: first
 * @src: second
 * Return: a character
 */
char *_stract(char *dest, char *src)
{
	int pom = 0, i;

	while (dest[pom])
		pom++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[pom] = src[i];
		pom += 1;
	}
	dest[pom] = '\0';
	return (dest);
}
