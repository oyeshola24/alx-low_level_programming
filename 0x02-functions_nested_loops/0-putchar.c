#include "main.h"

int main(void)
{
	char *main = "Main";

	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
