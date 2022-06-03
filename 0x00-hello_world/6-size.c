#include <stdio.h>
/**
   * main - data types
   *
   *Return: 0
   */
int main(void)
{
	char h;
	int n;
    long int g;
    long long int v;
    float t;

	printf("Size of a char: %lu byte\(s\)\n", sizeof(h));
	printf("Size of an int: %lu byte\(s\)\n", sizeof(n));
	printf("Size of a long int: %lu byte\(s\)\n", sizeof(g));
	printf("Size of a long long int: %lu byte\(s\)\n", sizeof(v));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(t));
	return (0);
}
