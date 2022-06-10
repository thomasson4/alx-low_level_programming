#include "main.h"
/**
 * more_numbers - function
 */
void more_numbers(void)
{
	int n = 48;
	int I = 0;
	int reset = 0;

	while (I < 10)
	{
		while (n <= 62)
		{
			if (n > 57)
			{
				reset = 10;
				_putchar(49);
			}
			_putchar(n - reset);
			n++;
		}
		n = 48;
		reset = 0;
		I++;
		_putchar(10);
	}
}
