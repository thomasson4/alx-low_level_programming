#include <stdio.h>
#include <math.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	long int c, b, a = 612852475143;

	while (a != 1)
	{
		for (b = 2; b <= a; ++b)
		{
			if ((a % b) == 0)
			{
				break;
			}
		}
		c = (a / b);
		a = c;
	}
	printf("%Ii\n", b);

	return (0);
}
