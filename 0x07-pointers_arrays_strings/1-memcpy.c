#include "main.h"

/**
* _memcpy - a copy of memory
* @dest: memory destination
* @src: memory at its source
* @n: number of copies of bytes to be copied
* Return: a string variable copied from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
