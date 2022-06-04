#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
 
int main(void)
{
	int p;
	int t;

	srand(time(0));
	p = rand() - RAND_MAX / 2;
	t = p % 10;
	if (t == 0)
	{
		printf("Last digit of %d is %d and is 0\n", p, t);
	}
	else if (t > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", p, t);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", p, t);
	}
	return (0);
}
