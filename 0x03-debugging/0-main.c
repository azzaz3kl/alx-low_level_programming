#include "main.h"

/**
* main - tests function that prints if integer is positive or negative.
*
* positive_or_negative: A function to check number if positive or negative
*
* Return: 0
*/

int main(void)
{
int i;

i = 0;
positive_or_negative(i);

return (0);
}

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
