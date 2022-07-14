#include <stdio.h>
#include <string.h>

/**
 * _stract - this is a function stract
 * @dest: first
 * @src: second
 * Return: a character
 */
char *_stract(char *dest, char *src)
{
	int poin = 0, n;

	while (dest[poin])
		poin++;

	for (n = 0; src[n] != 0; n++)
	{
		dest[poin] = src[n];
		poin += 1;
	}
	dest[poin] = '\0';
	return (dest);
}
