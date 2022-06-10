#include "main.h"

/**
* void print_square(int size) -> This is to print a line square
* @size: integer params
*/
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(25);
			}
			_putchar('\n');
		}
	}
}
