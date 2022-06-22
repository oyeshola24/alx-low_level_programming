#include "main.h"

/**
  * _strpbrk - searching a string for a set of bytes if it occurs
  * @s: a source string
  * @accept: characters if accepted
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
int a = 0, b;

while (s[a])
{
b = 0;

while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}

b++;
}

a++;
}

return ('\0');
}
