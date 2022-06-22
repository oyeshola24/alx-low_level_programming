#include "main.h"

/**
* _strchr - a string character
* @s: a string given
* @c: a char
* Return: a string variable
*/
char *_strchr(char *s, char c)
{
int a;

while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
