#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @b: The character to print
 * 
 * Return: On success 1
 * On error, -1 is returned, and error is configured appropriately
 */
int _putchar(char b)
{
    return (write(1, &b, 1));
}
