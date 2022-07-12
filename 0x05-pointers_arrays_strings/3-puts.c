#include "main.h"

/**
 * _puts - a function that prints astring
 * @str: a param to puts function
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
