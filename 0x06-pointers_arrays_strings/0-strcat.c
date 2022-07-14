#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - this is a function stract
 * @dest: first
 * @src: second
 * Return: a string
 */
char *_strcat(char *dest, char *src)
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
