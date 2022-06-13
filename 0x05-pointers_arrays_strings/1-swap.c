#include "main.h"
/**
 * swap_init - function
 *
 * @a: pointer of parameter
 * @b: pointer of parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
