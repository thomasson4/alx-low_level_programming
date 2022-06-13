#include "main.h"

/**
 * swap_init - changes values
 * @a: character to be inputed
 * @b: second character to be inputed
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
