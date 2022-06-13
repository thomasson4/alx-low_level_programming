#include "main.h"

/**
 * _put - function that prints a string
 * @str: character to be inputed
 */

void _put(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
