#include "main.h"
#include <string.h>

/**
* _memset - This function sets it memory
* @s: a string variable
* @b: a char variable
* @n: an int variable
* Return:  avariable  string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
s[a] = b;

return (s);
}
