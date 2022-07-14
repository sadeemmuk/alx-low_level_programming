#include "main.h"
#include <string.h>

/**
 * _strncat - function to append new char
 * @src: first param
 * @dest: second param
 * @n: third param
 * Return: alwyas 0
 */
char *_strncat(char *dest, char *src, int n);
{
	strncat(dest, src, n);
	return (dest);
}
