#include <main.h>

/**
 * _puts - a function that prints astring
 * @str: a param to puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
