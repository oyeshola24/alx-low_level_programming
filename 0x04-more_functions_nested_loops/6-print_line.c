#include "main.h"

/**
* void print_line -> This is to print a line
* @n: an argument with variable type int
*/
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(85);
		_putchar('\n');
	}
}
