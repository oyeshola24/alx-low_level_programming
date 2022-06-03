#include <stdio.h>
/**
 *main - Prints the sizeof char,int, float,long int and long long int
 *Return: 0 if Success
 */
int main(void)
{
char car;
int integer;
long int lngint;
long long int lnglng;
float flow;
printf("Size of a char: %d byte(s)\n", sizeof(car));
printf("Size of an int: %d byte(s)\n", sizeof(integer));
printf("Size of a float: %d byte(s)\n", sizeof(flow));
printf("Size of a long int: %d byte(s)\n", sizeof(lngint));
printf("Size of a long long int: %d byte(s)\n", sizeof(lnglng));
return (0);
}
