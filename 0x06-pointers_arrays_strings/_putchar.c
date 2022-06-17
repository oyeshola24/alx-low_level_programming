#include <unistd.h>

/**
 * _putchar - inputs the char c to stdout
 * @c: The character to print
 *
 * Return: success 1.
 * On error: -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
