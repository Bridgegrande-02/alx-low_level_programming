#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 15);
	if (n % 15 > 5)
		printf("and is greater than 5\n");
	else if (n % 15 == 0)
		printf("and is 0\n");
	else if (n % 15 < 6 && n % 15 !=0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
