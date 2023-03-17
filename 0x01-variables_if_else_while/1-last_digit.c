#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print the last digit of the number stored in variable n.
 *Return: 0 (Success)
 */
int main(void)
{
	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastnum = n % 10;
	printf("Last digit of %d is %d ", n, lastnum);
	if (lastnum > 5)
	{
		printf("and is greater than 5\n");
	}
	if (lastnum == 0)
	{
		printf("and is 0\n");
	}
	if (lastnum < 6 && lastnum != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
