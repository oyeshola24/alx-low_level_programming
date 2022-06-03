#include <stdio.h>
/**
   * main - calculates the data types and their various sizes
   *
   *Return the value zero
   */
int main(void)
{
	char ch;
	int interger;
    long int cat;
    long long int date;
	float fl;


	printf("Size of a char: %lu byte\(s\)\n", sizeof(ch));
	printf("Size of an int: %lu byte\(s\)\n", sizeof(interger));
    printf("Size of a long int: %d byte(s)\n", sizeof(cat));
    printf("Size of a long long int: %d byte(s)\n", sizeof(date));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(fl));
	return (0);
}
